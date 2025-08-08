#include <iostream>

int main(){
    int a,b;
    using namespace std;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Enter the operator: ";
    cin.ignore();
    char op;
    cin>>op;
    switch(op){
        case '+':
            cout<<"The sum of two numbers is: "<<a+b<<endl;
            break;
        case '-':
            cout<<"The difference of two numbers is: "<<a-b<<endl;
            break;
        case '*':
            cout<<"The product of two numbers is: "<<a*b<<endl;
            break;
        case '/':
            cout<<"The quotient of two numbers is: "<<a/b<<endl;
            break;
        default:
            cout<<"Invalid operator"<<endl;
            break;
    }
}