#include <iostream>

int main(){
    char choice;
    char arr[3] = {'r','s','p'};
    std::cout << "Enter 'r' for rock, 's' for scissors, and 'p' for paper.\n";
    std::cin >> choice;
    char machine_choice = arr[rand()%3];//random choice between 0-3
    
    //game logic
    if(machine_choice == choice){
        std::cout << "Machine chose: "<<machine_choice<<". It's a tie!\n";
    }
    else if(machine_choice =='r' && choice == 's'){
        std::cout << "Machine chose: "<<machine_choice<<". You lose!\n";
    }
    else if(machine_choice == 'p' && choice == 'r'){
        std::cout << "Machine chose: "<<machine_choice<<". You lose!\n";
    }
    else if(machine_choice == 's' && choice =='p'){
        std::cout << "Machine chose: "<<machine_choice<<". You lose!\n";
    }else{
        std::cout << "Machine chose: "<<machine_choice<<". You WON!!! GG!!\n";
    }
}