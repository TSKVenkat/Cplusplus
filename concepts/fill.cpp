#include <iostream>

int main(){
    std::string name[20];
    std::string n;
    std::cout << "Enter your name: ";
    std::getline(std::cin,n);
    fill(name,name+19, n);

    for(int i = 0;i<20;i++){
        std::cout <<name[i]<<std::endl;
    }
}