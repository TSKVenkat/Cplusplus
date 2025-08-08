#include <iostream>

int main(){
    using namespace std;
    int num;
    cout<<"Enter your number: ";
    cin>>num;
    int sum=0;
    for(int i=0;i<num;i++){
        int digit=num%10;
        sum+=digit;
        num /=10;
    }
    cout<<"The sum of the digits is: "<<sum<<endl;
}