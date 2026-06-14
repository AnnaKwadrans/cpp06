#include <iostream>

class Parent {};
class Child1: public Parent {};
class Child2: public Parent {};

int main(void)
{
    Child1 a;                  // reference value;

    Parent *b = &a;            // implicit reinterpretation cast
    Parent *c = (Parent *) &a; // explicit reinterpretation cast

    Parent *d = &a;            // implict upcast -> OK
    //Child1 *e = d;           // implicit downcast -> won´t compile
    Child2 *f = (Child2 *) d;  // explicit downcast -> OK

    return (0);
}
