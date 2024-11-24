// Sum of Digits of a Number 2343 = 2+3+4+3 = 11;

#include<iostream>
using namespace std;

int SumOfDig(int num){
    int DigSum=0;
    while(num>0){
        int LastDig = num%10; // find reminder to add
        DigSum+=LastDig;

        num/=10; // updating number to cut last value
    }
    return DigSum;
}

/*
    Use for loop instead of while loop
    for(; num > 0; num /= 10) {  // Loop continues until num becomes 0
        int LastDig = num % 10;  // Get the last digit
        DigSum += LastDig;       // Add it to the sum
    }

    return DigSum;
}
*/


int main(){
    cout<<"Sum = "<<SumOfDig(575656)<<endl;

    return 0;
}