#include<iostream>
using namespace std;

int main(){
    /*declaring size of array*/
    int arr[5];
    cout<<"Please Enter only integer type value"<<endl;
    /*using loop to input 5 values in array*/

    for(int s=0; s<5; s++){
        cout<<"Enter the value in ["<<s<<"] : ";
        cin>>arr[s];
    }

    /*To calculate and print the sum of all integer
    we can simply take the size_of arr[s].
    but here we will store the value in another variable*/

    int total;
    total=0; /*we take total=0 b/c in every iteration the value will store in total*/

    for(int t=0; t<5; t++){
        total+=arr[t];
    }
    cout<<endl; //to take a new line after completing this loop.

    /* the above loop will iterate five times and the values will be storing one by one 
    in our (total) variable.*/

    cout<<"The sum of all elements of the given data is = "<<total;

return 0;
}