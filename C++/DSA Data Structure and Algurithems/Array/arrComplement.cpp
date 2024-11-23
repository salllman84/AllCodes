#include<iostream>
using namespace std;

void FindComplement(int arr1[], int sz1, int arr2[],int sz2){
    for(int i=0; i<sz1; i++){
        for(int j=0; j<sz2; j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<"\t";
            }
        }
    }
}

int main(){
    int Arr1[]={1,3,4,5,7,2};
    int size1=sizeof(Arr1) / sizeof(Arr1[0]);
    int Arr2[]={7,9,0,5,8};
    int size2 = sizeof(Arr2) / sizeof(Arr2[0]);

    cout << "Common elements between Arr1 and Arr2 are: ";
    FindComplement(Arr1, size1, Arr2, size2);

    return 0;
}
