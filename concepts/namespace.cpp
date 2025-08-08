#include <iostream>

namespace first {
    int x =1;
}

namespace second {
    int x =2;
}

namespace third {
    std::string y = "phineas";
}

namespace four {
    std::string y = "doofenshmirtz";
}

int main(){
    int x = 0;

    std::cout << x << std::endl;
    std::cout << first::x << std::endl;
    std::cout << second::x << std::endl;

    using namespace four;
    std::cout << y;
}

//you can even use "using namespace std;" and you wont need to use "std::" again, WE GOT RID OF IT!!! this line "std::cout << y" will be "cout", booyah!

//namespaces are basically for not running into redeclaration errors so that different entities
// can have the same variable name, why is c++ like this? too much for a python kid bruh