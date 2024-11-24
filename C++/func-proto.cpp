#include<iostream>
using namespace std;

// call by reference.

// int byref(int &c, int &d)
// {
//     c=30;
//     d=40;
//     int sum=c+d;
//     return sum;
// };

// int main(){

//     int a=6;
//     int b=2;
//     int x=byref(a,b);
//     cout<<x<<endl;



// Call by value.

int byvalue(int &x, int &y){
    x=4;
    y=5;
    int mult=x*y;
    return mult;
}

int main()
{
int a=10;
int b=9;
cout<<byvalue(a,b);
  
return 0;
}
