#include <iostream>

int main() {
    using namespace std;
    char gender;
    cout<<"Enter 'm' for male and 'f' for female: "<<endl;
    cin >> gender;
    gender == 'm' ? cout << "You are a male!" << endl : cout << "You are a female!" << endl;
}