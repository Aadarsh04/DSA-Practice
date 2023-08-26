#include<iostream>
using namespace std;

class Hero{

    //properties
    private:
    int health;

    public:
    char level;

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

};

int main(){

    //static allocation
    Hero a;
    a.setHealth(80);
    a.level = 'A';
    cout<<"Health is "<<a.getHealth()<<endl;
    cout<<"Level is "<<a.level<<endl;

    //dynamic allocation
    Hero *b = new Hero;
    b -> setHealth(70); //(*b).setHealth(70);
    b -> level = 'B'; //(*b).level('B')
    cout<<"Health is "<<(*b).getHealth()<<endl;
    cout<<"Level is "<<(*b).level<<endl;

    cout<<"Health is "<<b -> getHealth()<<endl;
    cout<<"Level is "<<b -> level<<endl;

    return 0;

}