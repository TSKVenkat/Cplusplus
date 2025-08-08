#include <iostream>
#include <cmath>

int main(){
    using namespace std;
    int num;
    cout<<"Enter your number: ";
    cin>>num;
    int count=0;
    while(num>0){
        num/=10;
        count++;
    }
    cout<<"The number of digits is: "<<count<<endl;
}