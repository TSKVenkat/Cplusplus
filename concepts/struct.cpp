#include<iostream>
#include<string>
using namespace std;

struct Student {
    int roll_no;
    string name;
    int marks[3];
    float average;
};

Student update(Student s) {
    cout<<"Enter student id:\n";
    cin>>s.roll_no;
    cout<<"Enter student name:\n";
    cin.ignore();
    getline(cin, s.name);
    cout<<"Enter student marks:\n";
    for(int i=0;i<3;i++){
        cout<<"Enter marks: ";
        cin>>s.marks[i];
    }
    cout<<"Computing student average...\n";
    float sum =0;
    for(int j=0;j<3;j++){
        sum+=s.marks[j];
    }
    s.average = sum / 3;
    return s;
}



int main() {
    Student s1;
    cout << "enter the roll no: ";
    cin >> s1.roll_no;
    cout << "enter the student name: ";
    cin.ignore();
    getline(cin, s1.name);
    
    for (int i = 0; i < 3; i++) {
        cout << "enter the " << i + 1 << " mark: ";
        cin >> s1.marks[i];
    }

    float sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += s1.marks[i];
    }
    s1.average = sum / 3;
    
    cout << "student name: " << s1.name << "\n";
    cout << "roll no: " << s1.roll_no << "\n";
    cout << "average mark: " << s1.average << "\n";

    cout<<"Updating student details...\n";
    s1=update(s1);//passing a struct to a function

    cout << "Updated student details:\n";
    cout<<"Student name: "<<s1.name<<endl;
    cout<<"Roll no: "<<s1.roll_no<<endl;
    for(int k=0;k<3;k++){
        cout<<"Mark "<<k+1<<": "<<s1.marks[k]<<endl;
    }
    cout<<"Student average: "<<s1.average<<endl;
    return 0;
}
