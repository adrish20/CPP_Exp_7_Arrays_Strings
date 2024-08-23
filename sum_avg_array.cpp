//Adrish Purkayastha
//PRN: 23070123011
//EnTC A
//CPP code to find the sum and average of elements of an array
#include<iostream>
using namespace std;
int main(){
    int x[5];
    int i,j,sum=0,avg=0;
    for(j=0;j<5;j++){
        cout<<"enter element: ";
        cin>>x[j];
        cout<<endl;
    }
    for(i=0;i<5;i++){
        sum +=x[i];
    }
    cout<<"sum is: "<<sum<<endl;
    avg = sum/5;
    cout<<"average is: "<<avg<<endl;
}
/*
Output:
enter element: 2

enter element: 6

enter element: 3

enter element: 5

enter element: 4

sum is: 20
average is: 4
*/