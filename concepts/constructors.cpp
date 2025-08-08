#include <iostream>

class student{
    public:
        std::string name;
        int age;
        double gpa;
        
    student(std::string name,int age, double gpa){
        this->name=name;
        this->age=age;
        this->gpa=gpa;//`this` is used with arrow pointer symbols to assing values to arguments
    }
};

int main(){
    //constructors are  special methods  which are automatically called when an object is instantiated
    //useful for assigning values to object properties
    //they are defined inside the class and are named the same as the class
    student stu("SpongeBob",20,8.5);
    student stu1("Venkat",20,9.5);
    std::cout<<stu.name<<std::endl;
    std::cout<<stu.age<<std::endl;
    std::cout<<stu.gpa<<std::endl;
    std::cout<<stu1.name<<std::endl;
    std::cout<<stu1.age<<std::endl;
    std::cout<<stu1.gpa<<std::endl;

}