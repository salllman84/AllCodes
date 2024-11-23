#include<iostream>
using namespace std;

int main(){
    int n=9;
    bool isprime= true;

    for(int i=2; i<n; i++)
    
    // we can write the condition (i*i<=n) or (i<=n/2) it  will check its half factor
    // because after its middle the factors are repeating.
    // lets write factor of 12: 1*12 = 12
                            //  2*6  = 12
                            //  3*4  = 12
                            //  4*3  = 12 repeating numbers are strted
                            //  6*2  = 12
                            //  12*1 = 12

    {
        if(n%i==0){
            isprime=false;
            break;
        }
    }

    if (isprime==true){
        cout<<n<<" is prime";
    }
    else{
        cout<<n<<" is not prime";
    }
}
