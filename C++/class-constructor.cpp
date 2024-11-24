// Constructor function are basically used to initialize values in data members during execution.

/* example.

#include<iostream>
using namespace std;

class sum{
    private:
    int n,m,s,add;

    public:
    sum(int x,int y, int z){
        n=x;
        m=y;
        s=z;
        add= n+m+s;
    }
    givesum(){
        cout<<"sum of "<<n<<" "<<m<<" and "<<s<<" = "<<add<<endl;
    }
};

int main(){
    // Here we inetialized during execution.
    sum aa(10,15,12), bb(44,56,23);
    aa.givesum();
    bb.givesum();

    return 0;
}
*/

#include<iostream>
using namespace std;

class construct{

    public:
    // this is constructer function;
    // member function name will be same to same like class name [class construct = construct()]
    construct(){
        cout<<"This is constructer"<<endl;
    }

    // this is simple function;
    void abc(){
        cout<<"simple function";
    }
};

int main(){
    construct a,b;
    /* 1.  without calling *construct() function will be axicuted with the number of object.
    if objects are 2 it will execute two times if object are 3 it will 3 time executed.*/

    /* 2. But the second member function *void abc() could'nt execute without calling.
    if we call * void abc () function by object name then it will executed.
    e.g: a.abc() */

    /* if object is one the output will be like below.
    This is constructer
    simple function */

    /* if the number of object are 2 then the output will be like below.
    This is constructer
    This is constructer
    simple function */
    
    // note: constructer depends on number of objects.

    a.abc();

    return 0;
}