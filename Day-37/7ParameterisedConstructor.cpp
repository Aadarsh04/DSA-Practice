#include<iostream>
using namespace std;

class Hero{

    private:
    int health;

    public:
    char level;

    // Hero(){
    //     cout<<"Constructor called"<<endl;
    // }

    //parameterised constructor
    Hero(int health){
        this -> health = health;
    }

    Hero(int health, char level){
        this -> health = health;
        this -> level = level;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }

    void print(){
        cout<<health<<endl;
        cout<<level<<endl;
    }

};

int main(){

    //object created statically
    Hero ramesh(10);
    ramesh.print();

    //dynamically
    Hero *h = new Hero(11);
    h -> print();

    Hero temp(22,'B');
    temp.print();

    return 0;
}