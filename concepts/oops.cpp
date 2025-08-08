#include <iostream>
using namespace std;

class models{
    public:
        string model;
        int bp;

        void model1(string model, int bp){
            cout<<"You are using a "<<bp<<" billion parameter "<<model<<" model."<<endl;
        };
};

int main(){
    models model;
    model.model1("GPT-4.1",20);
};