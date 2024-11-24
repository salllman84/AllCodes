/* Write a C++ program that uses a for loop to iterate through numbers from 1 to 10.
Inside the loop, use the break statement to exit the loop 
when the loop variable is 5.  */ 

#include<iostream>
using namespace std;

int main () 
    {
        for (int numbers = 1; numbers <= 10; numbers ++)
               {
            
                if (numbers == 5)
                {
                    continue;
                }
        cout << numbers << " ";
    }
    return 0;
}