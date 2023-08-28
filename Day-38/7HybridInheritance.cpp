#include<iostream>
using namespace std;

//parent class 1
class Vehicle{

    public:
        Vehicle(){
            cout<<"This is a vehicle"<<endl;
        }

};

//parent class 2
class Fare{

    public:
        Fare(){
            cout<<"Fare of vehicle"<<endl;
        }

};

//child class 1
class Car: public Vehicle{


};

//child class 2
class Bus: public Vehicle, public Fare{


};

int main(){

    Bus obj2;

    return 0;

}