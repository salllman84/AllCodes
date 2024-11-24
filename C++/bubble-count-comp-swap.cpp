// Write a program to count the number of comparisons and swaps performed during the bubble sort process.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of elements : ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int comparisons = 0, swaps = 0;

    for(int counter=1; counter<n-1; counter++){
        for(int com=0; com<n-counter; com++){
            comparisons++;
            if(arr[com]>arr[com+1]){
                swaps++;
                int temp = arr[com];
                arr[com]=arr[com+1];
                arr[com+1] = temp;
            }
        }
    }

    cout<<"Sorted array"<<endl;

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<"\nNumber of Comparisons : "<<comparisons;
    cout<<"\nNumber of Swaps       :"<<swaps;

return 0;
}