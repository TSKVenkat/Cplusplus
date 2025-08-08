//aliases

#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>>pairlist_t;
typedef std::string text_t;
typedef int number_t;

int main() {
    using namespace std;//namespace concept

    text_t firstName = "Steve";
    text_t lastName = "Rogers";
    number_t num = 10;

    cout << firstName << lastName << num << endl;//concatenation
    cout << firstName << ' ' << lastName << ' ' << num << endl;
}