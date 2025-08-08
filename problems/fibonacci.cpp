#include <iostream>

int main(){
    using namespace std;

    int num;
    cout<<"Enter your range: ";
    cin>>num;
    int a=0,b=1,c;
    for(int i=0;i<num;i++){
        cout<<a<<' ';
        c=a+b;
        a=b;
        b=c;
    }
}