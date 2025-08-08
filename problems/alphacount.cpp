#include <iostream>

int main(){
    using namespace std;
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    int vcount=0,ccount=0;
    for(char c:str){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
            vcount++;
        }else{
            ccount++;
        }
    }
    cout<<"The number of vowels is: "<<vcount<<endl;
    cout<<"The number of consonants is: "<<ccount<<endl;
}