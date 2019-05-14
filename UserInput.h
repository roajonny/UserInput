#ifndef USERINPUT_H
#define USERINPUT_H
#include <iostream>
#include <string>

using std::string;
using std::cin;

//User input class created with only static methods that return values
//Isolating all access to the iostream to one file
class UserInput
{
    
public:
    UserInput();
    ~UserInput();
    
    static int get_int();
    static char get_char(); //min char 'A', max char 'Z'
    static double get_double();
    static string get_string();
    
    static int get_int(int min, int max);
    static char get_char(char min, char max); //min char 'A', max char 'Z'
    static double get_double(double min, double max);
    static string get_string(unsigned int min, unsigned int max); //min and max length
};

#endif // USERINPUT_H
