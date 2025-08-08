#include <iostream>

//getters and setters are used to get and set the values of private variables.

class Stove{
    private:
        int temperature;//available only within the class
    public:
        int gettemp(){
            return temperature;
        }

        void settemp(int temperature){
            this->temperature=temperature;
        }
};

int main(){
    Stove stove;
    std::cout <<"Temperature of stove is: "<<stove.gettemp()<<std::endl;
    std::cout<<"Enter new temperature to set:\n";
    int temp;
    std::cin>>temp;
    stove.settemp(temp);
    std::cout<<"Temperature of stove is: "<<stove.gettemp()<<std::endl;
};