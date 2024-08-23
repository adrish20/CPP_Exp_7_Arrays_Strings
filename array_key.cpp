//Adrish Purkayastha
//PRN: 23070123011
//EnTC A
//CPP program find an element called key in a given array
#include<iostream>
using namespace std;
int main(){
    int i;
    int key = 40;
    int x[5] = {14,56,40,85,41};
    for(i=0;i<5;i++){
        if(x[i]==key){
            cout<<"Element found at "<<i<<" position"<<endl;
            break;
        }  
    }
    if(i==5){
        cout<<"Element not found";
    }
}
/*
OUTPUT:
Element found at 2 position
*/