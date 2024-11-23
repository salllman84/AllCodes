#include<iostream>
using namespace std;

class findmax
    {
    public:
    int max=0;
    findmax(int a, int b, int c)
        {
        if (a>b)
        {
            if(a>c)
            max=a;
        else
        {
            max=c;
        }
        }
        else if(b>c)
        {
            max=b;
        }
            else
            {
                max=c;
            }
        
        cout<<"\nMaximum value between three values is "<<max<<endl;
    }

    findmax(int a, int b){
        if (a>b){
            max=a;
        }
        else{
            max=b;
        }
        cout<<"\nMaximum value between two values is "<<max<<endl;
    }

};

int main(){
    findmax aa(33,55),bb(22,11,13);
    return 0;
}