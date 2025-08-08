#include <iostream>

int main(){
    int x,y;
    using namespace std;

    cout<<"Enter the x coordinate: ";
    cin>>x;
    cout<<"Enter the y coordinate: ";
    cin>>y;
    if(x>0 && y>0){
        cout<<"The point is in the first quadrant"<<endl;
    }else if(x<0 && y>0){
        cout<<"The point is in the second quadrant"<<endl;
    }else if(x<0 && y<0){
        cout<<"The point is in the third quadrant"<<endl;
    }else if(x>0 && y<0){
        cout<<"The point is in the fourth quadrant"<<endl;
    }else{
        cout<<"The point is on the origin"<<endl;
    }
}