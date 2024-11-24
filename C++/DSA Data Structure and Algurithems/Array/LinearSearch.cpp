#include<iostream>
using namespace std;

int LinearSearch(int arr[], int s, int targt){
    for(int i=0; i<s; i++){
        if(arr[i]==targt){
            return i;// If return (i), function will end
            // return arr[i]; // it will return value of Arr[i]=8
        }
    }
    return -1;// If not return (i) above, will return (-1)
}

int main(){
    int Arr[]={1, 4, 7, 3, 8, 5, 2};
    int size=7, target=8;

    int MyTarget=LinearSearch(Arr,size,target);
    cout<<MyTarget;
}