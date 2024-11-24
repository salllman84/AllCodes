#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n; // size of arr.

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;
// sorting of array.
    for(int counter = 1; counter<n ;counter++){
        for(int j=0; j<n-counter; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
}