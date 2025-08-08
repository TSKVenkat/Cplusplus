#include <iostream>

int main(){
    double principal,rate,time;
    using namespace std;
    cout<<"Enter principal amount: ";
    cin>>principal;
    cout<<"Enter rate of interest: ";
    cin>>rate;
    cout<<"Enter time period(years): ";
    cin>>time;
    const int SI = (principal*rate*time)/100;
    cout<<"Simple Interest is: "<<SI<<endl;
}