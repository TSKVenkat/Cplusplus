#include <iostream>

int main(){
    char ch;
    using namespace std;

    cout<<"Enter a character: ";
    cin>>ch;
    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z'){
        cout<<"The character is an alphabet"<<endl;
    }else{
        cout<<"The character is not an alphabet"<<endl;
    }
}