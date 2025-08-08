#include <iostream>

int main(){
    using namespace std;
    int num;
    cout<<"Enter your number: ";
    cin>>num;
    int rev=0;
    while(num>0){
        int digit=num%10;
        rev=rev*10+digit;
        num/=10;
    }
    cout<<"The reversed number is: "<<rev<<endl;
}