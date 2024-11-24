#include<iostream>
using namespace std;

class student{
    float avg;
    float total;
    int*p;
    
    public:
        float calcavg(int noofsubject){
            p=new int [noofsubject];
            avg =0.0; total=0;
            for(int i=0; i<noofsubject; i++){
                cout<<"Enter marks : ";
                cin>>p[i];
                total+=p[i];
            }
            avg=total/noofsubject;
            cout<<"\nResult displayed below.\n";
            cout<<"Total = "<<total<<endl;
            return avg;
        }
~student(){
    delete []p;
}
};

int main(){
    int n;
    cout<<"Enter number of subjects : ";
    cin>>n;
    student s1;
    float printResult=s1.calcavg(n);
    cout<<"Average : "<<printResult;

    return 0;
}