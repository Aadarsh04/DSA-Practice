#include<iostream>
using namespace std;

void printArray(int arr[],int size){

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

void swapAlternate(int arr[],int size){

    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }

}

int main(){

    int array[7]={11,22,33,44,55,66,77};

    swapAlternate(array,7);

    printArray(array,7);

    return 0;

}