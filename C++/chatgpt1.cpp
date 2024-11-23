// Array Operations:
// Write a program to perform the following operations on an array:

// Initialize an array with user input values.
// Display the elements of the array.
// Find the sum of all elements in the array.
// Find the largest and smallest elements in the array.
// Search for a specific element in the array and display its index.



#include<iostream>
using namespace std;

int main()
{

int user[2];

for (int i=0; i<2; i++)
{
    cout<<"Enter the value in ["<<i<<"] = ";
    cin>>user[i];
}

int sum;

for(int j=0; j<2; j++){
    sum=0;
    sum+=user[j];
}


for(int m=0; m<2; m++){
    cout<<"The value in index number ["<<m<<" = "<<user[m]<<endl;
}

for(int k=0; k<2; k++){
    user[0];
    if(k>user[0]){
    
        cout<<"the largest value in all elements of array is = "<<k;
        
    }
}

cout<<endl;

for(int s=0; s<2; s++){
    if (s<user[s]){
        cout<<"The smallest value is = "<<s;
    }
}


cout<<"The sum of all elements = "<<sum<<endl;

cout<<endl;



int find_number;
cout<<"enter any number if exist: ";
cin>>find_number;


bool found=false;
for(int l=0; l<2; l++){
    if(find_number==user[l]){
        found=true;
        cout<<"The value is on index number ["<<l<<"]";
        break;
    }

    else 
    {
        cout<<"Not Exist";
    }
}


return 0;
}