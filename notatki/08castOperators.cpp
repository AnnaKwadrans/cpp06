#include <iostream>

class Foo
{
        private:

                float   _v;

        public:

                Foo(const float v) : _v(v) {}

                float   getv(void)      { return(this->_v); }

                operator float()        { return(this->_v); }
                operator int()          { return(static_cast<int>(this->_v)); }

};

int main(void)
{
        Foo a(420.042f);

        float b = a;
        int c = a;

        std::cout << a.getv() << " " << b << " " << c << std::endl;
        return (0);
}
