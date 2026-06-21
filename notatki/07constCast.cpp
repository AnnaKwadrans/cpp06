int main(void)
{
        int     a = 42;                                 // reference value

        const int       *b = &a;                        // implicit promotion OK
        int             *c = b;                         // implicit demotion NO
        int             *d = const_cast<int *>(b);      // explicit demotion OK

        return (0);
}