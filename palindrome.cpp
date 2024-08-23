//Adrish Purkayastha
//PRN: 23070123011
//EnTC A
//CPP program to check if a word is a palindrome
#include <iostream>
#include<string>
using namespace std;

int main(){
    string str, rev_str;
    cout << "Enter a word: ";
    cin >> str;
    int length = str.length();
    for(int i=length-1; i >= 0; i--){
        rev_str += str[i];
    }
    if(str == rev_str){
        cout << "It is a palindrome" << endl;
    }
    else{
        cout << "It is not a palindrome" << endl;
    }
    return 0;
}
/*
OUTPUT:
Enter a word: malayalam
It is a palindrome

Enter a word: hello
It is not a palindrome
*/