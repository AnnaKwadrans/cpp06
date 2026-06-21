#include <iostream>

int main(void)
{
        float   a = 420.042f;                           // reference value

        void    *b = &a;                                // implicit promotion OK
        int     *c = reinterpret_cast<int *>(b);        // explicit demotion OK
        int     &d = reinterpret_cast<int &>(b);        // explicit demotion OK

        std::cout << a << " " << *(static_cast<int *>(b)) << " " << (*c) << " " << d << std::endl;

        return (0);
}