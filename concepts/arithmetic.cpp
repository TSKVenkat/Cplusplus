#include <iostream>
#include <cmath>

typedef int i;
typedef double d;

int main() {
    using namespace std;
    i num = 5;
    cout << num <<std::endl;

    i num2 = 10;
    d num3 = 5.00;
    d num4 = 10.00;

    cout << num*num2 << '\n';
    cout << num/num2 << '\n';//results in floor division becoz datatype is int and the asnwer will be truncated to a whole number i.e., integer.
    cout << num+num2 << '\n';
    cout << floor(num/num2) << '\n';
    cout << num3/num4 << '\n';//both num3 and num4 are double datatypes so here you will get 0.5 which is a double/ decimal output! stay smart gang!!!

    return 0;
}