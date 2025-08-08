#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    int ref=0;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Enter third number: ";
    cin>>c;
    int arr[] = {a,b,c};
    for(int i=0;i<3;i++){
        if(arr[i]>ref){
            ref=arr[i];
        }
    }
    cout<<"The largest number is: "<<ref<<endl;
}