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

    // the below function is *distructor function, known by (~) that symbol.
    // it will execute when the whole program mean *Constructor function are executed completly. 
    ~sum(){
        cout<<"sum of "<<n<<" "<<m<<" and "<<s<<" = "<<add<<endl;
    }
};

int main(){
    // Here we inetialized during execution.
    sum aa(10,15,12), bb(44,56,23);
    

    return 0;
}