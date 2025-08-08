#include <iostream>

class animal{
    public:
        bool alive=true;
    void eat(){
        std::cout<<"This animal is eating"<<std::endl;
    }
};

class dog:public animal{
    public:
    std::string breed;
    void bark(){
        std::cout<<"This dog is barking"<<std::endl;
}
void setBreed(std::string breed){
    this->breed=breed;
}
};

int main(){
    dog dog1;
    std::cout<<dog1.alive<<std::endl;
    dog1.eat();
    dog1.bark();
    dog1.setBreed("Labrador");
    std::cout<<dog1.breed<<std::endl;
}