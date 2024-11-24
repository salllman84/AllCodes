#include<iostream>
using namespace std;

// if both are same [(0^0=0) (1^1=0)] will equal to = 0 (zero)
// else [(1^0=1) (0^1=1)] will equal to = 1 (one)

int main(){
    int a=4, b=8;       //  4= 100
                        //  8=1000
                        // ________
                        //    1100=12
    cout<<(a^b);

    return 0;
}