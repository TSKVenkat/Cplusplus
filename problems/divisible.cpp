#include <iostream>

int main(){
    int num;
    using namespace std;
    cout<<"Enter a number: ";
    cin>>num;
    if(num%5==0 && num%11==0){
        cout<<"The number is divisible by 5 and 11"<<endl;
    }else{
        cout<<"The number is not divisible by 5 and 11"<<endl;
    }
}