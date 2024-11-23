/* write a program in C++ to initialize values in a character
 type array, copy these values into a second array of the 
 same type and then print the values from the second array on
 the screen. */


#include<iostream>
using namespace std;

int main()
{

char first_array[4]={ 'A', 'B', 'C', 'D'};
char second_array[4];

for(int i=0; i<4; i++)
{
    second_array[i]=first_array[i];
}

cout<<"the values in second array which we copied from first array are below"<<endl;
for(int i=0; i<4; i++)
{
    cout<<second_array[i];
}

return 0;

}