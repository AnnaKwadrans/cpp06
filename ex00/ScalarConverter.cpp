#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter &other) { (void)other; }
ScalarConverter::~ScalarConverter() {}
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other) { (void)other; return(*this);}



static Type getType(const std::string &str)
{
    if ((str.length() == 1 && !isdigit(str.front())) ||
            (str.length() == 3 && str.front() == '\'' && str.back() == '\''))
        return (CHAR);
    else if (str.find('.') == std::string::npos)
        return (INT);
    else if (str.back() == 'f')
        return (FLOAT);
    else
        return (DOUBLE);
}

static void     convertChar(const std::string &str) {
    
    char    c;

    if (str.length() == 1) {
        c = *str.begin();
    }
    else if (str.length() == 3)
        c = (str[str.find_first_not_of('\'')]);
    else {
        std::cout << "CAHR NOT VALID" << std::endl;
        return ;
    }

    std::cout << "char: " << c << std::endl
        << "int: " << static_cast<int>(c) << std::endl
        << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl
        << "double: " << static_cast<double>(c) << std::endl;
    /*
    int integer;
    std::stringstream ss;

    switch (type)
    {
        case CHAR:
            if (str.length() == 1)
                return (static_cast<char>(*str.begin()));
            else if (str.length() == 3)
                return (static_cast<char>(str[str.find_first_not_of('\'')]));
        case INT:
            ss << str;
            ss >> integer;

            //if (integer < 32 || integer > 126)
                // char: Non displayable
            return ('a');
        case FLOAT:
            return ('a');
        case DOUBLE:
            return ('a');
    }
    
    if (str.length() == 1)
        return (static_cast<char>(*str.begin()));
    else if*/ 
    //return ('a');
}

static void      convertInt(const std::string &str) {
    (void)str;
}

static void    convertFloat(const std::string &str) {
    (void)str;
}

static void   convertDouble(const std::string &str) {
    (void)str;
}

void ScalarConverter::convert(const std::string &str) {

    // verify
    
    // data type
    Type type = getType(str);

    //convert & print
    switch (type)
    {
        case CHAR:
            convertChar(str);
        case INT:
            convertInt(str);
        case FLOAT:
            convertFloat(str);
        case DOUBLE:
            convertDouble(str);
    }

    return;
}
