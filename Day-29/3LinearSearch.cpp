#include<iostream>
using namespace std;

bool linearSearch(int arr[],int size,int key){

    //base case
    if(size==0)
        return false;
    if(arr[0]==key)
        return true;
    else{
        return linearSearch(arr+1,size-1,key);
    }
    
}

int main(){

    int arr[9]={19,6,15,10,27,4,31,21,35};
    int size=9;
    int key=26;

    bool ans=linearSearch(arr,size,key);

    if(ans==true){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Absent"<<endl;
    }

    return 0;

}