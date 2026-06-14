int main(void)
{
    int a = 42;                        // referenca value

    double b =  a;                     // implicit promotion -> OK
    int c = b;                         // implicit demotion -> won´t compile?
    int d = static_cast<int>(b);       // explicit demotion -> OK

    return (0);
}
