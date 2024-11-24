#include<iostream>
using namespace std;

// MultiDimentional Array Bubble Sorting.

int main(){
    int arr[4][4]={{55, 33, 22, 91},
                   {68, 24, 99, 49},
                   {53, 12, 34, 56},
                   {23, 56, 98, 45}};

        for(int counter=1; counter<4; counter++){
            for(int i=0; i<4; i++){
                for(int j=0; j<4-counter; j++){
                    if (arr[i][j]> arr[i][j+1]){
                        int temp=arr[i][j];
                            arr[i][j]=arr[i][j+1];
                            arr[i][j+1]=temp;
                    }
                }
            }
        }

        for(int i=0; i<4; i++){
            for(int j=0; j<4; j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
}