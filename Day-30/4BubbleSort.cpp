#include<iostream>
using namespace std;

void sortArray(int *arr,int size){

    //base case - already sorted
    if(size==0 || size==1){
        return ;
    }

    //1 case solve krlia - largest element ko end mein pahucha dega
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    sortArray(arr,size-1);

}

int main(){

    int arr[5]={2,7,1,4,0};

    sortArray(arr,5);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    return 0;

}