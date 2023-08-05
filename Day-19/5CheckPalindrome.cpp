#include<iostream>
using namespace std;

char toLowerCase(char ch){

    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }

}

bool checkPalindrome(char a[], int n){

    int s=0;
    int e=n-1;
    while(s<=e){
        if(toLowerCase(a[s]) != toLowerCase(a[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;

}

int getLength(char ch[]){
    int count=0;
    for(int i=0;ch[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){

    char name[20];
    cin>>name;

    int len = getLength(name);

    cout<<"Palindorme of Not "<<checkPalindrome(name, len);

    return 0;

}