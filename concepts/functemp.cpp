#include <iostream>
template <typename T>//this is a function template. lets say that i dont know what datatype is going to be passed
//i can just deifne a template and pass any data type , stay smart gng

T maximum(T num1, T num2)
{
    return (num1 > num2) ? num1 : num2;
}

int main()
{
    using namespace std;
    int num1, num2;
    cout << "Enter two numbers:\n";
    cin >> num1;
    cin >> num2;
    int res = maximum(num1, num2);
    if (res == num1)
    {
        cout << num1 << " is greater than " << num2 << endl;
    }
    else
    {
        cout << num2 << " is greater than " << num1 << endl;
    }
}