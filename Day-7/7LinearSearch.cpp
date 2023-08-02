#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){
    
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;

}


int main(){

    int array[10]={11,12,34,26,-2,-14,3,7,42,-21};
    
    cout<<"Enter the value to search"<<endl;

    int key;
    cin>>key;

    //bool found = search(array,10,key);

    if(search/*found*/(array,10,key)){
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"Key is not present"<<endl;
    }

    return 0;

}