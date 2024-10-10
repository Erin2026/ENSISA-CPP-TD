#include "my_class.h"

void My_class::my_class(string _s):s(_s){}

void My_class::print_my_element(){
    cout << s << endl;
}

int main(){
    My_class glass = My_class("Hello WOrld!");
    glass.print_my_element();
    return 0;
}
