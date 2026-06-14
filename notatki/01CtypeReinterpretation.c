#include <stdio.h>

int main(void)
{
    float a = 420.042f;   // reference value

    void *b = &a;         // implicit reinterpretation cast
    void *c = (void *) &a; // expicit reinterpretation cast

    void *d = &a;         // implicit promotion -> OK 
    int *e = d;           // implicit demotion -> hazardous
    int *f = (int *) d;    // explicit demotion -> OK
    
    printf("%p, %f\n", &a, a);
    printf("%p, %f\n", &b, b);
    printf("%p, %f\n", &c, c);

    printf("\n%p, %f\n", &d, d);
    printf("%p, %f\n", &e, e);
    printf("%p, %f\n", &f, f);    
    
    return (0);
}
