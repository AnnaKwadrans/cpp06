class Parent {};
class Child1 : public Parent {};
class Child2 : public Parent {};
class Unrelated {};

int main(void)
{
    Parent a;

    Child1 *b = &a;
    Child1 *c = static_cast<Child1 *>(&a);


    return (0);
}