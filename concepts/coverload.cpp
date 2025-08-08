#include <iostream>

//constrcutor overloading is a feature that allows a class to have multiple constructors with different parameters
//multiple constructors with the same name but different parameters
//0 or more parameters
//when a function and constructor have the same name but different parameters, it is called constructor overloading
//when a function and constructor have the same name and same parameters, it is called constructor overriding

class pizza{
    public:
        std::string topping1;
        std::string topping2;
        std::string topping3;

    pizza(std::string topping1){
        this->topping1=topping1;
    }
    pizza(std::string topping1,std::string topping2){
        this->topping1=topping1;
        this->topping2=topping2;
    }
    pizza(std::string topping1,std::string topping2,std::string topping3){
        this->topping1=topping1;
    }
};

int main(){
    pizza p1("pepperoni");
    pizza p2("mushrooms","peppers");
    pizza p3("onions","peppers","olives");
    std::cout<<p1.topping1<<std::endl;
    std::cout<<p2.topping1<<std::endl;
    std::cout<<p2.topping2<<std::endl;
    std::cout<<p3.topping1<<std::endl;
    std::cout<<p3.topping2<<std::endl;
    std::cout<<p3.topping3<<std::endl;
}