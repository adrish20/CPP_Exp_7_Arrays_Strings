//Adrish Purkayastha
//PRN: 23070123011
//EnTC A
//CPP program to take elements as input of array and print it
#include<iostream>
using namespace std;
int  main(){
    int x[5],i,j;
    for(i=0;i<5;i++){
        cout<<"enter element: ";
        cin>>x[i];
        cout<<endl;
    }
    for(j=0;j<5;j++){
        cout<<x[j]<<endl;
    }

}
/*
OUTPUT:
enter element: 2

enter element: 3

enter element: 4

enter element: 6

enter element: 5

2
3
4
6
5
*/