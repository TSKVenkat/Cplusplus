#include <iostream>

int main() {
    std::string arr[] = {"venkat","aditya","sri hari","sunil"};
    for( std::string res : arr){
        std::cout << res << std::endl;//output : venkat aditya sri hari sunil
    }
}