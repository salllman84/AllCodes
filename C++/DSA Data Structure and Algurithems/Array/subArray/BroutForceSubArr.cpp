#include<iostream>
#include<climits>
using namespace std;

// Sub Arrays but its time complexity is o(n ^ 3).
// we can use kedani algorithem.

void NumberOfSubArray(int arr[], int size){

    for(int start=0; start<size; start++){
        for(int end=start; end<=size; end++){
            for(int val=start; val<end; val++){
                cout<<arr[val];
            }
            cout<<" ";
        }
        cout<<endl;
    }
}


int main(){
    int Arr[]={1,2,3,4,5,6};
    int size=sizeof(Arr)/ sizeof(int); // sizeof(Arr)/ sizeof(Arr[0]);

    cout<<"Original Array\n";
    for (int i=0 ; i<size; i++){
        cout<<Arr[i]<<" ";
    }
    cout<<"\nsize: "<<size<<"\n";

    cout<<"Sub Array of Original Array\n\n";

    NumberOfSubArray(Arr, size);


    return 0;
}