#include <iostream>

int main(){
    int num;
    using namespace std;
    cout<<"Enter a number: ";
    cin>>num;
    if(num > 0){
        cout<<"The number is positive"<<endl;
    }else if(num < 0){
        cout<<"The number is negative"<<endl;
    }else{
        cout<<"The number is zero"<<endl;
    }
}