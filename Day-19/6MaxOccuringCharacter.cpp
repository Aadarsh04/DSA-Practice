#include<iostream>
using namespace std;

char getMaxOccCharacter(string s){
    int arr[26] = {0};

    //create an array of count of characters
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        int number =0;
        number = ch - 'a';
        arr[number]++;
    }

    //find the maximum occ characters
    int maxi=-1;
    int ans=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }

    char finalAns = 'a' + ans;
    return finalAns;
}


int main(){

    string ch;
    cin>>ch;

    cout<<getMaxOccCharacter(ch);    

    return 0;

}