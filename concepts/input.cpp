#include <iostream>

typedef int i;

int main() {
    using namespace std;

    i age;
    string name;

    cout << "What's your age?" << endl;
    cin >> age;

    cin.ignore();

    cout << "What's your name?" << endl;
    getline(cin, name);

    cout << "Your name is " << name << " and your age is " << age;

    return 0;
}