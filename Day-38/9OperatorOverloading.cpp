#include<iostream>
using namespace std;

class B{

    public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }

    void operator + (B &obj){
        int value1 = this->a;
        int value2 = obj.a;

        cout<<"Output "<<value2-value1<<endl;
    }

    void operator () (){
        cout<<"Mai Bracket Hu"<<endl;
    }

};

int main(){

    B obj1, obj2;
    obj1.a = 3;
    obj2.a = 7;

    obj1 + obj2;
    
    obj1() ;

    return 0;

}