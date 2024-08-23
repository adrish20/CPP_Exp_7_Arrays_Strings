//Adrish Purkayastha
//PRN: 23070123011
//EnTC A
//CPP program to find the largest and smallest element in an array
#include <iostream>
using namespace std;
int main(){
    int i,j, max, min;
    int arr[5] = {2,6,5,9,7};
    max=arr[0];
    min = arr[0];
    for(i=0;i<5;i++){
        if(arr[i]>=max){
            max = arr[i];
        }
    }
    for(j=0;j<=5;j++){
        if(arr[j]<=min){
            min = arr[j];
        }
    }
    cout<<"Max no is: "<<max<<endl;
    cout<<"Min no is: "<<min<<endl;
}
/*
OUTPUT:
Max no is: 9
Min no is: 2
*/
