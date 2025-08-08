#include <iostream>
#include <ctime>

int main(){
    srand(time(0));
    int res = (rand()%6)+1;//generates a random number between 1 to 6
    switch(res){
        case 1:
            std::cout << "You got 1!";
            break;
        case 2:
            std::cout << "YOu got 2!";
            break;
        case 3:
            std::cout << "YOu got 3!"<<std::endl;
            break;
        case 4:
            std::cout << "You got 4!"<<std::endl;
        break;
        case 5:
            std::cout << "You got 5!"<<std::endl;
            break;
        case 6:
            std::cout << "You got 6!"<<std::endl;
            break;
        default:
            std::cout<<"I will never end up but ok"<<std::endl;
            break;
    }
}
