#include<iostream>
using namespace std;

int main(){
    
    //create 2D array
    int arr[3][4];

    //taking input -> row-wise input
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cin>>arr[row][col];
        }
    }

    // //taking input -> col-wise input
    for(int col=0;col<4;col++){
        for(int row=0;row<3;row++){
            cin>>arr[row][col];
        }
    }

    //print
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    return 0;

}