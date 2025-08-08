#include <iostream>

int factorial(int num){
    if(num==0 || num==1){
        return 1;
    }else{
        return num*factorial(num-1);
    }
}

int main(){
    int num;
    using namespace std;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Factorial of "<<num<<" is: "<<factorial(num)<<endl;
}