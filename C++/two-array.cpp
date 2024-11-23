#include<iostream>
using namespace std;

int main(){
    int aa[5][4];
    int max;
    int maxRowIndex, maxColumnIndex;

    for(int i=0; i<5; i++){
        for(int j=0; j<4; j++){
            cout<<"Enter value in "<<i<<"  "<<j<<" : ";
            cin>>aa[i][j];
        }
    }

max = aa[0][0];
    maxRowIndex = 0;
    maxColumnIndex = 0;

for(int k=0; k<5; k++){
        for(int l=0; l<4; l++){
            if (max <= aa[k][l]){
                max = aa[k][l];
                maxRowIndex = k; // Update maxRowIndex to current row index
                maxColumnIndex = l; // Update maxColumnIndex to current column index
            }
        }
    }

    cout<<"Maximum value is "<<max<<" ans stored at index [ "<<maxRowIndex<<" ][ "<<maxColumnIndex<<" ]";

    return 0;
}