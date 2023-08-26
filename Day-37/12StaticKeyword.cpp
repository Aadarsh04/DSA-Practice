#include<iostream>
using namespace std;

class Hero {

    public:
    static int timeToComplete;

};

int Hero::timeToComplete = 5;

int main() {

    Hero a;

    cout << a.timeToComplete << endl;


    Hero b;
    b.timeToComplete = 10 ;
    cout  << a.timeToComplete << endl;
    cout << b.timeToComplete << endl;

    return 0;
}