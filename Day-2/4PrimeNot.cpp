#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=2;
    while(i<n){
        if(n%i==0){
            cout<<"Not Prime"<<endl;    
            break;
        }
        else{
            cout<<"Prime"<<endl;    
            break;
        }
        i=i+1;
    }
}