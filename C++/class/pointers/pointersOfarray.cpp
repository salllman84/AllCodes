#include<iostream>
using namespace std;

// Write a function modifyArray that takes an integer array and its size as arguments
// and doubles each element of the array using pointers.

void modifyArray(int arr[], int s){
    int* ptr = arr;
    for(int i=0; i<s; i++){
        *ptr*=2;
        cout<<*ptr<<"\t";
        ptr++;
    }
}

int main(){

int size;
cout<<"Enter size of array : ";
cin>>size;
int array[size];
for(int i=0; i<size; i++){
    cout<<"Enter element number "<<i+1<<": ";
    cin>>array[i];
    cout<<endl;
}

modifyArray(array, size);

    return 0;
}