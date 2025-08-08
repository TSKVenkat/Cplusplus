#include <iostream>

int main(){
    int num;
    using namespace std;
    cout<<"Enter a number: ";
    cin>>num;
    if(num<0){
        num*=-1;
    }
    cout<<"The absolute value of the number is: "<<num<<endl;
}