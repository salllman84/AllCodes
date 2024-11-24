#include<iostream>
using namespace std;

class findMax{
    int num[2];
    int max;

    public:
    void getnum();
    void findmaxnum();
    void givemax();
};

void findMax::getnum(){
    for(int i=0; i<2; i++){
        cout<<"Enter value in "<<i+1<<" Index"<<endl;
        cin>>num[i];
    }
}

void findMax::findmaxnum(){
    max = num[0]; // Initialize max with the first element of the array
    for(int j = 1; j < 2; j++){
        if (num[j] > max) {
            max = num[j]; // Update max if a larger element is found
        }
    }
}

void findMax::givemax(){
            cout<<"\nmaximum value is : "<<max;
}

int main(){
    findMax number;
    number.getnum();
    number.findmaxnum();
    number.givemax();

    return 0;

}