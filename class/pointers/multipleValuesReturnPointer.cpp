#include<iostream>
using namespace std;

void ReturnMaxAndMin(int array[], int sixe, int* max, int* min){
    for(int i=1; i<sixe; i++){
        if(array[i]>*max){
            *max = array[i];
        }
        if(array[i]<*min){
            *min = array[i];
        }
    }
}

int main(){
    int size;
    cout<<"enter size of array : ";
    cin>>size;

    int arr[size];
    cout<<"Enter value to array."<<endl;
    for(int i=0; i<size; i++){
        cout<<"Enter value at index ["<<i<<"] : ";
        cin>>arr[i];
        cout<<endl;
    }

    int max = arr[0];
    int min = arr[0];

    ReturnMaxAndMin(arr, size, &max, &min);
    cout<<"Max : "<<max<<endl;
    cout<<"Min : "<<min;

    return 0;
}