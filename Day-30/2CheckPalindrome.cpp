#include<iostream>
using namespace std;

bool checkPalindrome(string str,int i,int j){

    //base case
    if(i>j){
        return true;
    }

    if(str[i] != str[j]){
        return false;
    }
    else{
        //recursive call
        return checkPalindrome(str,i+1,j-1);
    }

}

int main(){

    string name="BookkooB";

    if(checkPalindrome(name,0,name.length()-1)==true){
        cout<<"It is a palindrome"<<endl;
    }
    else{
        cout<<"It is not a palindrome"<<endl;
    }

    return 0;
}