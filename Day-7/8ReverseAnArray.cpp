#include<iostream>
using namespace std;

void reverse(int arr[],int size){

    int start=0;
    int end=size-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }


}

void printArray(int arr[],int size){

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}


int main(){

    int array[9]={11,12,34,26,-2,-14,3,7,42};

    reverse(array,9);
    printArray(array,9);

    return 0;
}