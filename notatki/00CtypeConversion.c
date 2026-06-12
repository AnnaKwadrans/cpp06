#include <stdio.h>

int     main(void) {

        int     a = 42;         // reference value
        double  b = a;          // implicit conversion cast (the compiler will make the conversion)
        double  c = (double)a;  // explicit conversion cast

        double  d = a;          // implicit promotion -> OK
        int     e = d;          // implicit demotion -> hazardous
        int     f = (int)d;     // explicit demotion -> OK

        printf("%d %f %f\n%f %d %d\n", a, b, c, d, e, f);
        return (0);


        
}