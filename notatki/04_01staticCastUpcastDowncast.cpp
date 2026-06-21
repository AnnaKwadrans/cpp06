class Parent {};
class Child1 : public Parent {};
class Child2 : public Parent {};
class Unrelated {};

int main(void)
{
    Child1 a;                               // reference value

    Parent *b = &a;                         // implitic upcast -> OK
    Child1 *c = b;                          // implitic downcast -> NO
    Child2 *d = static_cast<Child2 *>(b);  // explicit downacst -> OK

    Unrelated *e = static_cast<Unrelated *>(&a); // explicit conversion -> NO


    return (0);
}
