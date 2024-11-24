#include<iostream>
using namespace std;

class studentmarks{
    string stdname[2];
    int sub[2];

    public:
    void getdata();
    void givedata();
};

void studentmarks::getdata(){
    cout<<"Enter students data\n";
    for(int i=0; i<2; i++){
        cout<<"Enter student "<<i+1<<" name : "<<endl;
        cin>>stdname[i];
        for(int j=0; j<2; j++){
            cout<<"Enter marks in subject "<<j+1<<" : ";
            cin>>sub[j];
        }
        cout<<endl;
    }
}

void studentmarks::givedata(){
    cout<<"\nDetail of student marks."<<endl;
    for(int i=0; i<2; i++){
        cout<<"Name = "<<stdname[i]<<endl;
        for(int j=0; j<2; j++){
            cout<<"Subject "<<j+1<<" = "<<sub[j]<<endl;
        }
    }
}

int main(){

    studentmarks stdmarks;
    stdmarks.getdata();
    stdmarks.givedata();

    return 0;
}