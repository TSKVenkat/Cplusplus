#include <iostream>

int main(){
    int num;
    using namespace std;
    cout<<"Enter your range: ";
    cin>>num;
    for(int i=0;i<=num;i+=2){
        cout<<i<<' ';
    }
}