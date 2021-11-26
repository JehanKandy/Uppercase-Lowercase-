#include <iostream>

using namespace std;

int main()
{
    char c;

    cout << "Enter any character : ";
    cin >> c;

    if(c >= 65 && c <= 90){
        cout << "You Entered Uppercase Latter \n\n";
    }else if(c >= 97 && c <= 122){
        cout << "You Entered Lowercase Latter \n\n";
    }else if(c >= 48 && c <= 57){
        cout << "You Entered Digit \n\n";
    }else if(c >= 33 && c <= 47 || c >= 58 && c <= 64 || c >= 91 && c <= 96 || c >= 123 && c <= 126){
        cout << "You Entered Special character \n\n";
    }

    return 0;
}
