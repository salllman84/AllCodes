#include<iostream>
using namespace std;

void ChangeArr(int Arr2[3]){
    cout<<"\nValues in function\n";
    for(int i=0; i<3; i++){
        Arr2[i]*=2;
        cout<<Arr2[i]<<"\t";
    }
}
int main(){
    int Arr[]={1, 2, 3};

    cout<<"Array Values in main\n";
    for(int i=0; i<3; i++){
        cout<<Arr[i]<<"\t";
    }
    // array itself is a pointer. it passes implicitly by reference
    ChangeArr(Arr);// change only function vlaues, will print 2, 4, 6;
    cout<<"\nArray Values in main after calling\n";// due to calling array values are updated it will print. 2, 4, 6;
    for(int i=0; i<3; i++){ // passing array to a fun change the original values, due to first call to function
                            // it is originally change in main variable
        cout<<Arr[i]<<"\t";
    }

    return 0;
}
