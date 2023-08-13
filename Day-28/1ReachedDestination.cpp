#include<iostream>
using namespace std;

void reachHome(int src,int dest){

    cout<<"Source "<<src<<" Destination "<<dest<<endl;
    //base case
    if(src==dest){
        cout<<"Pahuch gya"<<endl;
        return ;
    }

    //processing-ek step aage badh jaao
    src++;

    //recursive call
    reachHome(src,dest);

}


int main(){

    int src=1;
    int dest=10;
    cout<<endl;
    reachHome(src,dest);
    cout<<endl;
    
    return 0;

}