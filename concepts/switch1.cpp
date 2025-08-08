#include <iostream>

int main() {
    char letter;
    using namespace std;
    cout << "Enter an alphabet" << endl;

    cin >> letter;
    switch(letter){
        case 'a':
        cout << "You entered "<<letter<<endl;
        break;
        default:
        cout << "Just enter 'a'!"<<endl;
        break;
    }
}