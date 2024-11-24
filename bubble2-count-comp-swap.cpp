// Write a functionto count the number of comparisons and swaps performed during the bubble sort process.

#include<iostream>
using namespace std;

void bubbleSort(int a[], int b, int &c, int &d){
    for(int counter=1; counter<b-1; counter++){
        for(int i=0; i<b-counter; i++){
            c++;
            if(a[i]>a[i+1]){
                d++;
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
}

int main(){
    int n;
    cout<<"Enter size of Array : ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"\nUnsorted Array"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    int comparisons = 0;
    int swaps = 0;
    bubbleSort(arr, n, comparisons, swaps);
    cout<<"\nSorted array"<<endl;

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nNumber of Comparison "<<comparisons;
    cout<<"\nNumber of Swaps        "<<swaps;

return 0;
}