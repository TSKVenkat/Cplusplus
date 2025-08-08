#include <iostream>

int main(){
    int a,b;
    using namespace std;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swapping, first number is: "<<a<<endl;
    cout<<"After swapping, second number is: "<<b<<endl;
}