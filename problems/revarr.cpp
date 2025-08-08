#include <iostream>

int main(){
    using namespace std;
    int arr[10];
    for(int i=0;i<10;i++){
        cout<<"Enter element: ";
        cin>>arr[i];
    }
    int arr2[10];
    for(int i=9;i>=0;i--){
        arr2[i]=arr[9-i];
    }
    for(int i=0;i<10;i++){
        cout<<arr2[i]<<' ';
    }
}