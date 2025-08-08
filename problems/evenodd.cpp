#include <iostream>

int main(){
    int num;
    using namespace std;
    cout<<"Enter a number: ";
    cin>>num;
    if(num%2==0){
        cout<<num<<" is even number"<<endl;
    }else{
        cout<<num<<" is odd number"<<endl;
    }
}