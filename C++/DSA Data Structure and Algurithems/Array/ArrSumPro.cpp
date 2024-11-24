#include<iostream>
using namespace std;

int ArrSum(int Arr[], int size){
    int Sum=0;
    for(int i=0; i<size; i++){
        Sum+=Arr[i];
    }
    return Sum;
}

int ArrPro(int Arr[], int size){
    int product=1;
    for(int i=0; i<size; i++){
        product*=Arr[i];
    }
    return product;
}

int main(){
    int Arr[]={1,2,3,4,5,6}, size=6;

    int Sum=ArrSum(Arr,size);
    cout<<"Sum of Array = "<<Sum<<endl;

    int Product=ArrPro(Arr, size);
    cout<<"Product of Array = "<<Product;

    return 0;
}