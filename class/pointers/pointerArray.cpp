#include<iostream>
using namespace std;

int main(){
    int array[4];/*={ 23,34,56,77 };
    cout<<array<<endl; // print 0 index address.            can't print other index.
    cout<<&array<<endl; // print 0 index address.           can't print other index.
    cout<<&array[0]<<endl; // will print 0 index address.   can print other index.
    cout<<array+0<<endl; // will print 0 index address.     can print other index.

    cout<<*array<<endl; //only for 0 index value.
    cout<<array[1]<<endl; // for every index can use.
    cout<<*array+7<<endl; // its means --> 1st element + number. 23+7= print 30;
    
    /* 
    in loop we can use it.

        cout<<*array+i<<endl;
    */

// for input
cout<<"Enter values to first loop\n";
    for(int i=0; i<4; i++){
        cout<<"Number : ";
        cin>>array[i];
        cout<<endl;
    }

cout<<"Data from first loop using simple array\n";
    for(int i=0; i<4; i++){
        cout<<array[i]<<"\t";
    }
// 2nd way for input.
cout<<"\nEnter values to second loop\n";
    for(int i=0; i<4; i++){
        cout<<"Number : ";
        cin>>*(array+i);
        cout<<endl;
    }
cout<<"Data from 2nd loop using pointers array\n";
    for(int i=0; i<4; i++){
        cout<<*(array+i)<<"\t";
    }


    return 0;
}