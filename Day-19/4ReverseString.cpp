#include<iostream>
using namespace std;

void reverse(char ch[], int n){

    int s=0;
    int e=n-1;
    while(s<e){
        swap(ch[s],ch[e]);
        s++;
        e--;
    }

}

int getLength(char ch[]){

    int count = 0;
    for(int i=0; ch[i] != '\0'; i++){
        count++;
    }
    return count;

}

int main(){

    char name[20];
    cout<<"Enter your name"<<endl;
    cin>>name;

    int len = getLength(name);

    reverse(name, len);
    cout<<name<<endl;

    return 0;

}