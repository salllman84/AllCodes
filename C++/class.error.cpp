#include <iostream>
using namespace std;

class kkk{
    public:
    ~kkk(){
        cout<<"ok";
    }
    kkk (int x){
        for (int c=1; c<=3; c++)
        cout<<"welcome"<<endl;
    }
};

int main(){
    kkk ob(4);
}
