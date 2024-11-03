#include <iostream>
#include <queue>
#include <stack>
#include <cctype>

using namespace std;

bool isPalindrome(const string &input){
    queue<char> file;
    stack<char> pile;

    for (char const letter : input){
        file.push(letter);
        pile.push(letter);
    }
    while (!pile.empty() && !file.empty()){
        char letterQueue = file.front();
        char letterStack = pile.top();
        if (letterQueue != letterStack){
            return false;
        }
        file.pop();        
        pile.pop();
    }
    return true ;
}

int main(){
    cout<<boolalpha;
    cout<< "Is'racecar' a palindrome? "
        << isPalindrome("racecar")<<endl;
        cout<< "Is'kayak' a palindrome? "
        << isPalindrome("kayak")<<endl;
    cout<< "Is'hello' a palindrome? "
        << isPalindrome("hello")<<endl;
    return 0;
}