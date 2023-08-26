#include<iostream>
using namespace std;

class Hero{

    public:
    Hero(){
        cout<<"Constructor called"<<endl;
    }

};

int main(){

    //object created statically
    Hero ramesh;

    //dynamically
    Hero *h = new Hero;

    return 0;

}