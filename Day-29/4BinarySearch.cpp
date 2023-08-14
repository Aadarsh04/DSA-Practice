#include<iostream>
using namespace std;

bool binarySearch(int arr[],int start,int end,int key){
    
    //base case - element not found
    if(start>end)
        return false;


    int mid=start + (end-start)/2 ;

    //base case - element found
    if(arr[mid]==key)
        return true;
    

    if(key > arr[mid]){
        start=mid+1;
        return binarySearch(arr,mid+1,end,key);
    }
    {
        end=mid-1;
        return binarySearch(arr,start,mid-1,key);
    }
    
}

int main(){

    int arr[9]={1,12,24,32,46,53,67,74,89};
    int start=0;
    int end=9;
    int key=46;

    int ans=binarySearch(arr,start,end,key);
    
    if(ans==true){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Absent"<<endl;
    }
    
    return 0;

}