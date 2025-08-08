#include <iostream>

int main(){
    using namespace std;
    char str[100];
    cout<<"Enter the string: ";
    cin.getline(str,100);
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    cout<<"The length of the string is: "<<count<<endl;
}