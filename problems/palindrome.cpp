#include <iostream>

int main(){
    using namespace std;
    int num;
    cout<<"Enter an integer: ";
    cin>>num;
    int rev=0;
    for(int i=0;i<num;i++){
        int digit=num%10;
        rev=rev*10+digit;
        num/=10;
    }
    if(rev==num){
        cout<<"The number is a palindrome"<<endl;
    }else{
        cout<<"The number is not a palindrome"<<endl;
    }
}