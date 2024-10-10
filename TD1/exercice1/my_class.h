#ifndef MY_CLASS_H
#define MY_CLASS_H

#include <iostream>
#include <string>
using namespace std;

class my_class
{
private:
    string s;
public:
    my_class(string s);
    ~my_class();

    void print_my_element(const string s);
};
