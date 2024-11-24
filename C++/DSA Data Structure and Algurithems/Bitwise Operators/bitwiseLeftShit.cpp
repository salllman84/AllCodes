#include<iostream>
using namespace std;

// This operator shipt the bits of binary number to the left side. Suppose
// 10=1010.   if we shipt it one(1) bit to the left it will become 1010_.
// (_) before it was 4 bit but we shipt it 1 bit to left and becomes 5 bit.
// and we will put at the empty(_) space 0.   1010_=10100.
// 10100=20
// if we shipt it 2 bits 1010=1010_ _. we will put 2 zero at the end = 101000
// 101000 = 40

int main(){
                        //  5= 101
                        //  7= 111
                        // ________
                        //     010=2
    cout<<(10<<1)<<endl;// 20
    cout<<(10<<2)<<endl;// 40
    
    // we can use loop to print more values.

    for(int i=3; i<=10; i++){
        cout<<(10<<i)<<endl;    // 80
                                // 160
                                // 320
                                // 640
                                // 1280
                                // 2560
                                // 5120
                                // 10240
    }

    return 0;
}