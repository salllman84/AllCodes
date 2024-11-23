#include<iostream>
using namespace std;
//1. using pointer for pass by reference
int ChangeA(int *ptr){
    *ptr = 20;
    return *ptr;
}

//2. using Alias for pass by reference
int ChangeB(int &a){
    a = 20;
    return a;
}
int main(){

/*
int a = 10;
int* b = &a;
int** c = &b;

cout<<"a : "<< a << endl;
cout<<"b : "<< b << endl;
cout<<"c : "<< c << endl;

cout<<"&a: "<< &a<< endl;
cout<<"*b: "<<*b << endl;
cout<<"*c: "<<*c << endl;
cout<<"**c: "<<**c << endl;
return 0;
*/

/*
int a = 10;
//1 Pointer
ChangeA(&a); // Can't pass (a) to a pointer
cout<<"Pinters: " << a << endl ;// 20

//2 Alias
ChangeB(a); // Can't pass (&a) to an Alias
cout<<"Alias: " << a << endl;// 20
return 0;
*/

// Array Pointer
int Arr [] = {1, 2, 3, 4, 5};
cout << "Arr: " << Arr << endl;// pointer, it will print the address of Arr[0] index
cout << "&Arr: "<< &Arr[0] << endl;
return 0;

}
