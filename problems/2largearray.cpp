#include <iostream>

int main(){
    using namespace std;
    int arr[10];
    for(int i=0;i<10;i++){
        cout<<"Enter element: ";
        cin>>arr[i];
    }
    int max1=arr[0];
    int max2;
    for(int i=0;i<10;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
            
        }
    }
    cout<<"The second largest element is: "<<max2<<endl;
}