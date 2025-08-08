#include <iostream>

int main(){
    int num,size;
    using namespace std;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Enter the size of the table: ";
    cin>>size;
    for(int i=1;i<=size;i++){
        cout<<num<<" * "<<i<<" = "<<num*i<<endl;
    }
}