// Implement the bubble sort algorithm to sort an array of integers in ascending order.
#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter number of elements.";
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cout<<"Enter a value in "<<i+1<<" number index : ";
        cin>>arr[i];
        cout<<endl;
    }

    for (int counter=0; counter<n; counter++){
        for(int i=0; i<n; i++){
            if(arr[i]>arr[i+1]){
                int temp= arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }

    cout<<"\nSorted array is : "<<endl;

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}

// Questions.

/* 

Implement the bubble sort algorithm to sort an array of integers in ascending order.
Modify the bubble sort algorithm to sort an array of strings in lexicographical order (alphabetically).
Write a function to count the number of comparisons and swaps performed during the bubble sort process.
Create a program that generates a random array of integers and sorts it using bubble sort.
Compare the performance of bubble sort with another sorting algorithm (e.g., selection sort or insertion sort) by measuring their execution times for sorting large arrays.
Implement a modified version of bubble sort that stops when the array is already sorted to improve its efficiency.
Solve the bubble sort problem using recursion instead of iteration.
Write a bubble sort algorithm for sorting a linked list instead of an array.
Explore the stability of the bubble sort algorithm by sorting an array of custom objects with duplicate keys and observing if their relative order is preserved.
Create an optimized version of bubble sort that skips iterations if no swaps are performed in a pass.

*/