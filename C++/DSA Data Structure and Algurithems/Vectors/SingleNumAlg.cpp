#include<iostream>
#include<vector>
using namespace std;

// write a function and find unique value in vector. don't use nested loop

void uniqueNumber(vector<int> &number){
    int ans=0;
    for(int val : number){
        ans^=val;
    }
    cout<<"Unique Values: "<<ans;
}

int main(){
    vector<int>num={1,2,5,2,1};
    uniqueNumber(num);

    return 0;
}

/*

remember: SINGLE NUMBER ALGORITHM has only one unique number.

how for each loop works?
assign first value of the container (vector<int>number) to the variable (for(int val)).
after each iteration (number) increments to the their second value and assign to value. and so on.
iterates upto the size of number={1,2,5,2,1} which is 5.

1st: val=1
2nd: val=2
3rd: val=5
4th: val=2
5th: val=1

Step-by-Step Execution:
Let's assume number is {1, 2, 5, 2, 1}. Here's what happens:

Initialization:

The loop starts, and val is assigned the first value from number, which is 1.
The statement ans ^= val; executes. Initially, ans is 0, so:
makefile
Copy code
ans = 0 ^ 1 = 1
First Iteration:

The loop moves to the next element in number, so val is now 2.
The statement ans ^= val; executes again:
makefile
Copy code
ans = 1 ^ 2 = 3
Second Iteration:

The loop moves to the third element in number, so val is 5.
The statement ans ^= val; executes:
makefile
Copy code
ans = 3 ^ 5 = 6

Third Iteration:

The loop moves to the fourth element, so val is 2.
The statement ans ^= val; executes:
makefile
Copy code
ans = 6 ^ 2 = 4

Fourth Iteration:

The loop moves to the fifth element, so val is 1.
The statement ans ^= val; executes:
makefile
Copy code
ans = 4 ^ 1 = 5
Loop Ends:

The loop finishes iterating through all elements in the number vector.
The final value of ans is 5, which is the unique number.
Summary of For-Each Loop:
It automatically starts from the first element of the number vector.
It assigns the current element of number to the variable val in each iteration.
It automatically increments (moves to the next element) after each iteration.
It ends when the loop has visited all the elements in the vector.
The key benefit of the for-each loop is its simplicity—there’s no need to
manually track indices like you would in a traditional loop (e.g., for (int i = 0; i < size; i++)).
It also reduces the chance of errors related to index manipulation.

In Your Case (XOR Operation):
The XOR (^) operator works through the values in the vector to find the unique number.
Since XOR cancels out the same numbers (a ^ a = 0), after the loop is done, the only remaining value
in ans will be the number that appears exactly once in the vector.



*/