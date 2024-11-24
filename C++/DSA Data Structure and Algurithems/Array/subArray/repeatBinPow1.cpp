#include<iostream>
using namespace std;
// O(log n) Time Complexity
int main(){
    int n=30, p=3;

    int ans=1, binary=p;
    while(binary>0){
        if(binary%2==1){
            ans*=n;
        }
        n*=n;
        binary /= 2;
    }

    cout<<n<<"^"<<p<<" : "<<ans;

    return 0;
}