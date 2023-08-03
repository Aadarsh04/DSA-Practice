#include<iostream>
using namespace std;

int Search(int arr[],int size,int key){

    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }

        mid=start+(end-start)/2;
    }
    return -1;
}

int main(){

    int a[9]={1,2,3,4,5,6,7,8,9};

    int key;
    int ans=Search(a,9,5);

    cout<<ans<<endl;

    return 0;
}