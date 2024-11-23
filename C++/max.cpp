#include<iostream>
using namespace std;

int main(){
int xyz[5][4],row,column,max;

for(row=0; row<5; row++){
    for(column=0; column<4; column++){
        cout<<"Enter value in ["<<row<<"] ["<<column<<"] = ";
        cin>>xyz[row][column];
    }
}
max=xyz[0][0];
for(row=0; row<5; row++){
    for(column=0; column<4; column++){
        if(max<xyz[row][column]){
            max=xyz[row][column];
        }
    }
}
cout<<"The maximum value in all elements of array = "<<max;

    return 0;
}