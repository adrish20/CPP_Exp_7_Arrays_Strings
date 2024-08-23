//Adrish Purkayastha
//PRN: 23070123011
//EnTC A
//CPP program to reverse a string and print it
#include <iostream>
#include<string>
using namespace std;
int main(){
    string str,rev_str;
    cout<<"Enter a word: ";
    cin>>str;
    int length,i;
    length = str.length();
    for(i=length-1;i>=0;i--){
        rev_str += str[i];
    }
    cout<<"reversed string is: "<<rev_str<<endl;
}
/*
OUTPUT:
Enter a word: dog
reversed string is: god

Enter a word: wed
reversed string is: dew
*/