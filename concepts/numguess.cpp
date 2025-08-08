#include <iostream>
#include <ctime>

int main(){
    srand(time(0));
    int num1,num2;
    using namespace std;
    cout << "Enter integer between 1-100: ";
    cin >> num2;
    num1 = (rand()%100)+1;
    if(num1 ==num2){
        cout << "YOU GOT IT RIGHT!"<<endl;
        cout<<"The number was "<<num1<<endl;
    }else{
        cout << "Sucker"<<endl;
        cout<<"The number was "<<num1<<endl;
    }
}