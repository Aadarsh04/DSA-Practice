#include<iostream>
using namespace std;

int score = 15;

void a(int& i){
    cout<<score<<" in a"<<endl;
}

void b(int& i){
    cout<<score<<" in b"<<endl;
}

int main(){

    cout<<score<<" in main"<<endl;

    int i;
    a(i);
    b(i);
    
    return 0;
}