#include<iostream>
using namespace std;

int sayDigits(int n,string arr[]){

    //base case
    if(n==0)
        return 0;

    //processing
    int digit=n%10;
    n=n/10;

    //recursive call
    sayDigits(n,arr);

    cout<<arr[digit]<<" ";
}


int main(){

    string arr[10]={ "zero", "one", "two", "three", 
                    "four", "five", "six", "seven", "eight","nine"};

    int n;
    cin>>n;

    sayDigits(n,arr);

    return 0;
}