#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int ans=0;
    int i=0;
    while(n!=0){
        int lastbit = n & 1;
        ans = ans + (lastbit * pow(10,i));

        n = n >> 1;
        i++;

    }
    cout<<"Answer is "<<ans<<endl;
}