//t find sum of n natural numbers
#include <iostream>

int main(){
    using namespace std;
    int num;
    cout<<"Enter your range: ";
    cin>>num;
    int sum=0;
    for(int i=0;i<=num;i++){
        sum+=i;
    }
    cout<<"The sum of the numbers is: "<<sum<<endl;
}