#include <iostream>

int main(){
    double celsius,fahrenheit;
    using namespace std;
    cout<<"Enter temperature in celsius: ";
    cin>>celsius;
    fahrenheit = (celsius*9/5)+32;
    cout<<"Temperature in fahrenheit is: "<<fahrenheit<<endl;
}