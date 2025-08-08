#include <iostream>

int main() {
    char op;
    double num1;
    double num2;
    double result;

    using namespace std;
    cout << "Enter operation (*+-/)" << endl;

    cin >> op;
    cin.ignore();
    cout << "Enter first number :" << endl;
    cin >> num1;
    cout << "Enter second number :" <<endl;
    cin >> num2;
    
    switch(op){
        case '+':
            cout << "Result: " << num1+num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1-num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1*num2 << endl;
            break;
        case '/':
            cout << "Result: " << num1/num2 << endl;
            break;
        default:
            cout << "Invalid Operator"<<endl;
            break;
    }
}