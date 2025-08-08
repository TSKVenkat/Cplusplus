#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));

    int num = rand();
    std::cout << num<<std::endl;

    return 0;
}