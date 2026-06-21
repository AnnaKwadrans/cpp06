#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter &other) { (void)other; }
ScalarConverter::~ScalarConverter() {}
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other) { (void)other; return(*this);}

//static Type getType(const std::string &str) {
//    (void)str;
//    return (INT);
//}

void ScalarConverter::convert(const std::string &str) {

    //char    c;
    //int     i;
    //float   f;
    //double  d;
    
    // data type
    //Type type = getType(str);

    // convert
    int i = atoi(str.c_str());

    std::cout //<< "char: " << c << std::endl
        << "int: " << i << std::endl
        /*<< "float: " << f << std::endl
        << "double: " << d << std::endl*/;
    
    return;
}
