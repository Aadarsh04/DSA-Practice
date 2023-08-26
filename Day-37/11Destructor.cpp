#include<iostream>
#include<string.h>
using namespace std;

class Hero{

    private:
    int health;

    public:
    char level;

    Hero(){
        cout<<"Simple constructor called"<<endl;
    }

    ~Hero(){
        cout<<"Donstructor bhai called"<<endl;
    }

};

int main(){

    //static
    Hero a;

    //dynamic
    Hero *b = new Hero();

    //manually destructor call
    delete b;

    return 0;
}