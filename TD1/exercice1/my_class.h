#ifndef MY_CLASS_H
#define MY_CLASS_H

#include <iostream>
#include <string>
using namespace std;

class My_class
{
private:
    string s;
public:
    My_class(string s);

    void print_my_element();
};

#endif
