#include <iostream>
#include <cmath>

int main () {
    double x =4.44;
    double y = 6.456;

    int z = 4;
    int g = 2;
    int h = -3;

    const double Z = pow(x,y);
    std::cout << Z << std::endl;

    std::cout << pow(z,g) << std::endl;
    std::cout << std::max(z,g) << std::endl;//both the arguments gotta be of the same types like int only with int and double only with double
    //no int and double comparing for max value
    std::cout << std::min(x,y) << std::endl;
    std::cout << sqrt(x) << '\n';
    std::cout << abs(h) << '\n';
    std::cout << round(y) << '\n';

}