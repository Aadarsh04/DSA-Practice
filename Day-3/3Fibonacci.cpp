#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0;
    int b=1;
    int nextnumber;
    cout<<a<<" "<<b<<" ";
    for(int i=3;i<=n;i++){
        nextnumber=a+b;
        cout<<nextnumber<<" ";
        a=b;
        b=nextnumber;
    }
}