#include<iostream>
using namespace std;


int main(){
    int Arr[]={1,2,3,4,5};
    int size=5;
    cout<<"Before Swapping\n";
    for(int i=0; i<size; i++){
        cout<<Arr[i]<<"\t";
    }
    cout<<endl;
    int start=0, end=size-1; // to compare index=0, & index 4. from 0 to 4 are 5 indexes= size
    for(; start<end;){
        swap(Arr[start],Arr[end]);
        start++;
        end--;
    }
    cout<<"After swapping\n";
    for(int i=0; i<size; i++){
        cout<<Arr[i]<<"\t";
    }

    return 0;
}