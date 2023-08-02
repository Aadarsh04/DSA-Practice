#include<iostream>
using namespace std;

int getMin(int arr[],int size){

    int min=INT_MAX;
    for(int i=0;i<size;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }

    //returning minimum value
    return min;
}

int getMax(int arr[],int size){

    int max = INT_MIN;
    for(int i=0;i<size;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }

    //returning maximum valve
    return max;
}


int main(){

    int array[100];
    int size;
    cin>>size;

    for(int i=0;i<size;i++){
        cin>>array[i];
    }

    cout<<"Maximum value :- "<<getMax(array,size)<<endl;
    cout<<"Minimum value :- "<<getMin(array,size)<<endl;

    return 0;

}