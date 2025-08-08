#include <iostream>
#include <string>
using namespace std;
int main() {
string name;
cout << "Enter any string: ";
cin >> name;
string sub;
cout << "Enter the substring: ";
cin >> sub;
size_t result = name.find(sub); // size_t is the correct type
if (result != string::npos) {
cout << "Given substring is present at index " << result << "\n";
} else {
cout << "Given substring is not found\n";
}
return 0;
}