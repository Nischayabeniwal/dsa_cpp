#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter char: ";
    cin >> ch;
    if(ch>='a' && ch<='z'){
        cout << "Char is lowcase!!.\n";
    }else if(ch>='A' && ch<='B'){
        cout << "Char is upcase!!.\n";
    }else{
        cout << "Special char!!";
    }

     
}

// for ASCII METHOD 
// A = 65 & Z = 90
// a = 97 & z = 122