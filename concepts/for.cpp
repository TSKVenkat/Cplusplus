#include <iostream>

int main() {
    for(int i = 0;i<5;i++){
        std::cout << i << std::endl;
    }

    for(int i = 0; i<5; i++){
        if(i < 4){
            std::cout << i << std::endl;
            continue;
        }
        else{
            std::cout << "Reached Four"<<std::endl;
            break;
        }
    }

    char arr[4] = {'!','@','#','$'};
    int arr1[4] = {1,2,3,4};

    for(int i=0; i< 4;i++){
        for(int j=0;j<4;j++){   
            std::cout << arr[i]*arr1[j] << std::endl;
        }
    }

}