#include<iostream>
using namespace std;

void ArrReverse(int arr[], int siz){
    int start=0, end=siz-1;

    for(;start<end;){
        swap(arr[start],arr[end]);
        start++, end--;
    }
}

int main(){
    int Arr[]={23, 45, 54, 46, 47, 4849, 80, 100};
    int sz=8;

    cout<<"Original array\n";
    for(int i=0; i<sz; i++){
        cout<<Arr[i]<<"\t";
    }

    ArrReverse(Arr,sz);
    cout<<"\nReverse array\n";
    for(int i=0; i<sz; i++){
        cout<<Arr[i]<<"\t";
    }
    return 0;
}