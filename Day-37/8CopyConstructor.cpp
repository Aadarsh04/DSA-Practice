#include<iostream>
using namespace std;

class Hero{

    private:
    int health;

    public:
    char level;

    Hero(){
        cout<<"Simple constructor called"<<endl;
    }

    //Parameterised constructor
    Hero(int health, char level){
        this -> health = health;
        this -> level = level;
    }

    //Copy constructor
    Hero(Hero &temp){
        cout<<"Copy constructor called"<<endl;
        this -> health = temp.health;
        this -> level = temp.level;
    }

    void print(){
        cout<<"Health "<<this->health<<endl;
        cout<<"Level "<<this->level<<endl;
    }

    // int getHealth(){
    //     return health;
    // }

    // char getLevel(){
    //     return level;
    // }

    // void setHealth(int h){
    //     health = h;
    // }

    // void setLevel(char ch){
    //     level = ch;
    // }

};

int main(){

    Hero S(70,'C');
    S.print();

    //copy constructor
    Hero R(S);
    R.print();

    return 0;


    return 0;

}