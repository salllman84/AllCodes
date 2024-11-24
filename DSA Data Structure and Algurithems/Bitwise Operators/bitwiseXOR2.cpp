#include<iostream>
using namespace std;

// if both are same [(0^0=0) (1^1=0)] will equal to = 0 (zero)
// else [(1^0=1) (0^1=1)] will equal to = 1 (one)

int main(){
    int a=5, b=7;       //  5= 101
                        //  7= 111
                        // ________
                        //     010=2
    cout<<(a^b);

    return 0;
}