#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    cout<<"Printing the array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Printing Done"<<endl;
}

int main(){

    
    int array[15];
    printArray(array,15);

    int Array[10];
    printArray(Array,10);

    return 0;

}