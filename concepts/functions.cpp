#include <iostream>

void show(std::string name){
    std::cout << "Your name is "<<name<<'\n';
}

double area(double len, double bred){
    return len*bred;
}

double perimeter(double len, double bred){
    return 2*(len+bred);
}

std::string hmm(std::string like);

int sizeofarray(std::string arr[]);

int main() {
    using namespace std;
    string name,like;
    double len,bred,ar,per;
    cout<<"ENter your name :";
    getline(cin,name);
    show(name);

    cout << "ENter length of rectangle:\n";
    cin >> len;
    cout << "ENter breadth of rectangle:\n";
    cin>>bred;
    ar = area(len,bred);
    per = perimeter(len,bred);
    cout << "Area of rectangle is "<<ar<<" and perimeter is "<<per<<".\n";

    cout << "ENter what you like:\n";
    cin.ignore();
    getline(cin,like);
    cout << hmm(like) << endl;

    string arr[] = {"sheesh","venkat","fanpit","vrishin"};
    sizeofarray(arr);
    int len1 = sizeof(arr)/sizeof(arr[0]);
    cout << "Size of array is: " << len1 << endl;
    return 0;
}

int sizeofarray(std::string arr[]){
    for(int i=0;i<4;i++){
        std::cout << arr[i] <<std::endl;
    }
}

std::string hmm(std::string like){
    return "It's really great that you like "+like+'\n';
}