#include <iostream>
#include <typeinfo>
#include <exception>

// dynamic cast is used only for downcast and checking after if succeeded

class Parent { public: virtual ~Parent(void) {} };
class Child1 : public Parent {};
class Child2 : public Parent {};

int main(void)
{
        Child1  a;              // reference value
        Parent  *b = &a;        // implicit upcast -> OK

        // explicit downcast OK
        
        Child1  *c = dynamic_cast<Child1 *>(b);
        if (c == NULL)
                std::cout << "converion is NOT ok" << std::endl;
        else
                std::cout << "conversion is OK" << std::endl;

        // explicit downcast NOT ok

        try {
                Child2  &d = dynamic_cast<Child2 &>(*b);
                std::cout << "conversion is OK" << std::endl;
        }
        catch (std::bad_cast &bc) {
                std::cout << "convesion is NOT ok: " << bc.what() << std::endl;
        }

        try {
                Child2  *d = dynamic_cast<Child2 *>(&a); // OK
                std::cout << "conversion is OK" << std::endl;
        }
        catch (std::bad_cast &bc) {
                std::cout << "convesion is NOT ok: " << bc.what() << std::endl;
        }

        return (0);
}
