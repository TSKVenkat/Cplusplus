#include <iostream>

int main() {
    using namespace std;
    int x;
    cout << "Enter a valid integer between 1-5:\n";
    cin >> x;

    switch(x){
        case 1:
            cout << "You entered " << x << endl;
            break;
        case 2:
            cout << "You entered " << x << endl;
            break;
        case 3:
            cout << "You entered " << x << endl;
            break;
        case 4:
            cout << "You entered " << x << endl;
            break;
        case 5:
            cout << "You entered " << x << endl;
            break;
        default:
            cout << "You entered " << x << ", which is not an integer between 1-5!"<< endl;
            break;
    }
}