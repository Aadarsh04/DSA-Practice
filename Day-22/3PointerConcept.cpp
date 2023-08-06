#include<iostream>
using namespace std;

int main(){

    int num = 5;
    int a = num;
    cout<<"a before "<<num<<endl;
    a++;
    cout<<"a after "<<num<<endl;

    int *ptr = &num;
    cout<<"before "<<num<<endl;
    (*ptr)++;
    cout<<"after "<<num<<endl;

    //Copying a pointer
    int *ptr2 = ptr;
    cout<<ptr<<" - "<<ptr2<<endl;
    cout<<*ptr<<" - "<<*ptr2<<endl;

    //Important concept
    int i=3;
    int *t = &i;
    *t=*t+1;
    cout<<*t<<endl;

    cout<<"before t "<<t<<endl;
    t=t+1;
    cout<<"after t "<<t<<endl;

    return 0;
}