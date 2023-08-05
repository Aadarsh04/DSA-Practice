#include<iostream>
using namespace std;

void printColSum(int arr[][3], int row, int col){
    
    //to print col wise sum
    cout<<"Printing Col Sum -> "<<endl;
    for(int col=0;col<3;col++){
        int sum = 0;
        for(int row=0;row<3;row++){
            sum += arr[row][col];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

void printRowSum(int arr[][3], int row, int col){
    
    //to print col wise sum
    cout<<"Printing Row Sum -> "<<endl;
    for(int row=0;row<3;row++){
        int sum = 0;
        for(int col=0;col<3;col++){
            sum += arr[row][col];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[3][3];
    cout<<"Enter the elements"<<endl;

    //taking row wise input
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cin>>arr[row][col];
        }
    }

    //print
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    printColSum(arr,3,3);
    printRowSum(arr,3,3);

    return 0;

}