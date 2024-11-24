#include<iostream>
using namespace std;

/* A static variable is a variable that retains its value across multiple calls to 
the function or throughout the program. It is shared by all instances of a class, 
meaning it belongs to the class itself rather than any individual object. */

int staticVar(int x){
    static int a=10;
    a*=x;

    return a;
}

int main(){
    for(int i=1; i<=3; i++){
        cout<<staticVar(i)<<"\t";
    }

    cout<<endl;

    for(int j=4; j<=6; j++){
        cout<<staticVar(j)<<"\t"; // static Var Value start again from 10;
    }
}

/*
Result:
Auto Var result: 10      20      30
                 40      50      60  *The value of (a=10) remain same

Static Var result: 10      20      60  
                   240     1200    7200 *The Value of(a=10) not remaining same it increments again & again
*/