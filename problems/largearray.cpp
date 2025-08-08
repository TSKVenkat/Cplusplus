#include <iostream>

int main(){
    using namespace std;
    int arr[10];
    for(int i=0;i<10;i++){
        cout<<"Enter the element: ";
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=0;i<10;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"The largest element is: "<<max<<endl;
}