#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <string>
# include <iostream>
# include <cstdlib>
# include <sstream>
# include <iomanip>

typedef enum eType {
    CHAR,
    INT,
    FLOAT,
    DOUBLE
} Type;

class ScalarConverter
{
    private:

        ScalarConverter();
        ScalarConverter(const ScalarConverter &other);
        ~ScalarConverter();
        ScalarConverter &operator=(const ScalarConverter &other);
    
    public:

        static void convert(const std::string &str);

};

#endif
