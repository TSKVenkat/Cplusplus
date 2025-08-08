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
    cout<<"The reversed string is: "<<str2<<endl;
}