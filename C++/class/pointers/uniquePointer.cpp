#include<iostream>
#include<memory>
using namespace std;

int main(){

    // syntax
    /*
    unique_ptr<type of data>name for unique pointer (p1)= make_unique<type of data>(data like 25);
    */
    unique_ptr<int>unPtr1 = make_unique<int>(25);
    cout<<*unPtr1<<endl;

    // to move unPtr1 address to another unique pointer then use (move) keyword.
    
    unique_ptr<int>unPtr2 = move(unPtr1);
    cout<<*unPtr2<<endl;
  

    return 0;
}