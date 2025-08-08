#include <iostream>

int main() {
    using namespace std;
    string name;

    do{
        cout << "Enter your name" << endl;
        getline(cin,name);
    }while(name != "venkat");

    cout << "Name is " << name;
}