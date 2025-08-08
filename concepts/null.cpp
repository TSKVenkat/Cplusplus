#include <iostream>

int main(){
    int *x=nullptr;
    std::cout << &x << std::endl;//dereferencing a nullptr leads to segmentation fault, stay smart gng
}