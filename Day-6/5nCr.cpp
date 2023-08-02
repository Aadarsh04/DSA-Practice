#include<iostream>
using namespace std;

int factorial(int n){
    
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*i;
    }
    return ans;
}

int nCr(int n, int r){

    int answer=factorial(n)/(factorial(r)*factorial(n-6));

    return answer;
}

int main(){
    
    int n,r;
    cin>>n>>r;
    cout<<nCr(n,r)<<endl;
    
    return 0;
}