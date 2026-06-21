#include <iostream>

class A {};
class B {};

class C 
{
        public:

        C( A const & _ ) { return; }
        explicit C( B const & _ ) { return; }
};

void    f(C const & _) {
        return;
}

int main(void)
{
        f( A() );       // implicit conversion OK
        f( B() );       // implicit convesion NOT ok pq constructor is explicit

        return (0);
}