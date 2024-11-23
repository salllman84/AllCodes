#include<iostream>
using namespace std;

class factorial {
private:
    int factof;

public:
    factorial(int a) {
        factof = 1;
        for (int i = 1; i <= a; i++) {
            factof *= i;
            // cout << "Factorial of " << i << ": " << factof << endl;
        }
        cout<<"Factorial of "<<a<<" = "<<factof;
    }

};

class sumofnumbers{
    int sum;

    public:
    sumofnumbers(int x, int y, int z){
        sum=x+y+z;
        cout<<"\nSum : "<<sum;
    }
};

int main(){

// factorial num;
factorial num(25);
sumofnumbers num2(11, 22, 33);

return 0;

}