#include<iostream>
using namespace std;

double findExponentialValue(double n, int p){
    //corner cases

    if (p==0){
        return 1;
    } if(n == 0){
        return 0;
    } if(n == 1 && p>=0){
        return 1;
    } if(n == -1 && p%2==0){
        return 1;
    } if(n == -1 && p%2 == 1){
        return -1;
    }
// End of corner cases
    double ans=1.0;
    int Bin= p;
    if(Bin<0){
        n=1/n; // 1/4
        Bin = -Bin; // suppose p= -5 will become p = 5;
    }
    for(;Bin>0;){
        if(Bin%2 == 1){
            ans*=n;
        }
     n *= n;
    Bin /= 2;
    }

    return ans;
}

int main(){
    int n=4, p=5;
    int ans = findExponentialValue(n,p);
    cout<<n<<"^"<<p<<" : "<<ans;

    return 0;
}