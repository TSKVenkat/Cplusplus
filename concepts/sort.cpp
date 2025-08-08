#include <iostream>

int sort(int arr[], int n);
int dsort(int arr[], int n);

int main() {
    int arr[] = {5,7,0,32,1,2,3,4,6,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,n);
    dsort(arr,n);
    return 0;
}

int dsort(int arr[], int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j] < arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    std::cout << "Sorted array in descending order is:\n";
    for(int k = 0; k<n;k++){
        std::cout << arr[k] << " ";
    }
}

int sort(int arr[], int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    std::cout << "Sorted array is:\n";
    for(int k = 0; k<n;k++){
        std::cout << arr[k] << " ";
    }
    std::cout << std::endl;
}