#include<iostream>
using namespace std;

int getLength(char ch[]){
    
    int count = 0;
    for(int i=0; ch[i] != '\0';i++){
        count++;
    }
    return count;

}

int main(){

    char name[20];
    cout<<"Enter your name"<<endl;
    cin>>name;

    cout<<"Length is "<<getLength(name)<<endl;

    return 0;

}