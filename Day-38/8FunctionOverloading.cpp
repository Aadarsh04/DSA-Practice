#include<iostream>
using namespace std;

class A{

    public:
    void sayHello(){
        cout<<"Hello Love Babbar"<<endl;
    }

    int sayHello(int num){
        cout<<"Hello Love Babbar 2"<<endl;
        return 1;
    }

    void sayHello(string name){
        cout<<"Hello"<<endl;
    }

};

int main(){

    A obj;
    obj.sayHello(12);

    return 0;

}