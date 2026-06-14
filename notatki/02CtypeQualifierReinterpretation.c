// type qualifiers in C: const, volatile...

int main(void)
{
    int a = 42;            // reference value

    int const *b = &a;     // implicit type qualifier const
    int const *c = (int const *) &a; // explicit type qualifier const

    int const *d = &a;     // implicit promotion -> OK
    int *e = d;            // implicit demotion -> won´t compile?
    int *f = (int *) d;    // explicit demotion -> OK

    // can be used if you need to use a library function that requires
    // a non-const parameter, but you have a const variable

    return (0);
}
