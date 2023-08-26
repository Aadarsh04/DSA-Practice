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

    //creation of object
    Hero ramesh;

    //use setter
    ramesh.setHealth(70);
    cout<<"Health is: " << ramesh.getHealth() << endl;

    ramesh.level = 'A';
    cout<<"Level is: "<<ramesh.level<<endl;

    return 0;

}