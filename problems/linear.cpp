#include <iostream>

int main(){
    using namespace std;
    int arr[10];
    for(int i=0;i<10;i++){
        cout<<"Enter element: ";
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key: ";
    cin>>key;
    for(int i=0;i<10;i++){
        if(arr[i]==key){
            cout<<"The key is found at index: "<<i<<endl;
            break;
        }
    }
}