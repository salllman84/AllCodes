#include<iostream>
using namespace std;

int main(){

int arr[5]={77, 33, 99, 12, 45};

for(int i=1; i<5; i++){
    for(int j=0; j<5-i; j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }

}
for(int k=0; k<5; k++){
        cout<<arr[k]<<" ";
    }
    return 0;
}