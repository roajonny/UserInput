#include "UserInput.h"
#include <iostream>
#include <string>


using std::cin;
using std::cout;
using std::endl;
using std::getline;
//functions for doubles are not working properly, after typing correct double after first incorrect value,
//compiler says input is nan

UserInput::UserInput()
{
}

UserInput::~UserInput()
{
}

int UserInput::get_int() {
    cout << "Enter an integer value: ";
    bool input_fails;
    int input{};
    cin >> input;
    
    input_fails = cin.fail();
    
    if (input_fails) {
        cout << "Invalid input - enter an integer value" << endl;
        cin.clear();
        cin.ignore(100, '\n');
        get_int();
    }
    else {
    return input;
    }
}
char UserInput::get_char() {
    cout << "Enter a char value: ";
    bool input_fails;
    char input{};
    cin >> input;
    
    input_fails = cin.fail();
    
    if (input_fails) {
        cout << "Invalid input - enter a char value" << endl;
        cin.clear();
        cin.ignore(100, '\n');
        get_char();
    }
    else {
    return input;
    }
}
double UserInput::get_double() {
    cout << "Enter an double value: ";
    bool input_fails;
    double input{};
    cin >> input;
    
    input_fails = cin.fail();
    
    if (input_fails) {
        cout << "Invalid input - enter an double value" << endl;
        cin.clear();
        cin.ignore(100, '\n');
        
        get_double();
    }
    else {
    return input;
    }
}
string UserInput::get_string() {
    cout << "Enter a string: ";
    bool input_fails;
    string input{};
    getline(cin, input);
    
    input_fails = cin.fail();
    
    if(input_fails) {
    cout << "Invalid input - enter a string" << endl;
    cin.clear();
    cin.ignore(100, '\n');
    get_string();
    }
    else {
    return input;
    }
}
int UserInput::get_int(int min, int max) {
    cout << "Enter an integer between " << min << " and " << max << ": ";
    int input{};
    cin >> input;
    if (input >= min && input <= max) {
        return input;
    }
    else { 
        cout << "Invalid input - enter integer value between " << min << " and " << max << endl;
        cin.clear();
        cin.ignore(100, '\n');
        get_int(min, max);
    }
    
}
char UserInput::get_char(char min, char max) {
    cout << "Enter a char between " << min << " and " << max << ": ";
    char input{};
    cin >> input;
    if(input >= min && input <= max) {
        return input;
    }
    else {
        cout << "Invalid input - enter char value between " << min << " and " << max << endl;
        cin.clear();
        cin.ignore(100, '\n');
        get_char(min, max);
    }
     
}
double UserInput::get_double(double min, double max) {
    cout << "Enter an double between " << min << " and " << max << ": ";
    double input{};
    cin >> input;
    if (input >= min && input <= max) {
        return input;
    }
    else { 
        cout << "Invalid input - enter double value between " << min << " and " << max << endl;
        cin.clear();
        cin.ignore(100, '\n');
        get_double(min, max);
    }
}
string UserInput::get_string(unsigned int min, unsigned int max) {
    cout << "Enter a string of length between " << min << " and " << max << ": ";
    string input{};
    getline(cin, input);
    if ((input.length() >= min) && (input.length() <= max)) {
        return input;
    }
    else {
        cout << "Invalid input - enter a string of length between " << min << " and " << max << endl;
        cin.clear();
        cin.ignore(100, '\n');
        get_string(min, max);
    }
    
}

