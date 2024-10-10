#include "main.h"


using namespace std;

void My_class::prints(string s){
    cout << s << endl;
}

int main(){
    My_class glass = My_class();
    glass.prints("Hello World!");
    return 0;
}

