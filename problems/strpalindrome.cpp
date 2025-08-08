#include <iostream>

int main(){
    using namespace std;
    string str;
    string str2 = "";
    cout<<"Enter the string: ";
    getline(cin,str);
    int len=sizeof(str)/sizeof(str[0]);
    for(int i=len;i>=0;i--){
        str2+=str[i];
    }
    if(str==str2){
        cout<<"The string is a palindrome"<<endl;
    }else{
        cout<<"The string is not a palindrome"<<endl;
    }
}