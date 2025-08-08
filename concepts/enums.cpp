#include <iostream>

enum Day
{
    sunday,
    monday = 2,
    tuesday = 3,
    wednesday = 4,
    thursday = 5,
    friday = 6,
    saturday = 7
};
//if you dont define the integer it will implicitly be set to 0, stay smart gng
enum Name{
    Pranov=1,
    shanker,
    aditya,
    venkat,
    tejas,
    abdullah,
    saachan
};

int main(){
    Day today = sunday;
    if (today == 0)
    {
        std::cout << "Today is Sunday\n";
    }
    else if (today == 1)
    {
        std::cout << "Today is Monday\n";
    }
    else if (today == 2)
    {
        std::cout << "Today is Tuesday\n";
    }
    else if (today == 3)
    {
        std::cout << "Today is Wednesday\n";
    }
    else if (today == 4)
    {
        std::cout << "Today is Thursday\n";
    }
    else if (today == 5)
    {
        std::cout << "Today is Friday\n";
    }
    else if (today == 6)
    {
        std::cout << "Today is Saturday\n";
    }
    else
    {
        std::cout << "Invalid day\n";
    }
    Name myname = Pranov;
    switch(myname){
        case 0:
            std::cout << "My name is Shanker\n";
            break;
        case 1:
            std::cout << "My name is Pranov\n";
    }
};