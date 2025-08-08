#include <iostream>

int main(){
    int a,b,c;
    using namespace std;

    cout<<"Enter the first side of the triangle: ";
    cin>>a;
    cout<<"Enter the second side of the triangle: ";
    cin>>b;
    cout<<"Enter the third side of the triangle: ";
    cin>>c;
    if(a+b>c && a+c>b && b+c>a){
        cout<<"The triangle is valid"<<endl;
    }
}