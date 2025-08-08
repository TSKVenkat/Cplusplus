#include <iostream>

int main(){
    //dynamic memory allocation na memory is allocated in the heap instead of stack and is done compilation and while running only
    //stay smart gng
    char *pGrades = NULL;
    int size;
    std::cout<<"Enter size:\n";
    std::cin>>size;
    pGrades = new char[size];

    for(int i=0;i<size;i++){
        std::cout<<i+1<<std::endl;
        std::cin>>pGrades[i];
    }

    for(int j=0;j<size;j++){
        std::cout<<pGrades[j]<<' ';
    }
    std::cout<<std::endl;

    delete [] pGrades;//do not forget to free memory

    return 0;
}