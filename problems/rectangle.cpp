#include <iostream>

int main(){
    double length,width;
    using namespace std;
    cout<<"Enter length of rectangle: ";
    cin>>length;
    cout<<"Enter width of rectangle: ";
    cin>>width;
    double area = length*width;
    double perimeter = 2*(length+width);
    cout<<"Area of rectangle is: "<<area<<endl;
    cout<<"Perimeter of rectangle is: "<<perimeter<<endl;
}