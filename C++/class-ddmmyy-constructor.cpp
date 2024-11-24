/*

Define a class Date with private attributes day, month, and year.
Implement a constructor that takes three integer arguments to initialize
these attributes, representing a date in the format dd/mm/yyyy.

*/

#include<iostream>
using namespace std;

class date{
    int day;
    int month;
    int year;

    public:
    date(int a, int b, int c){
        day=a;
        month=b;
        year=c;

        cout<<"day   : "<<day<<endl;
        cout<<"Month : "<<month<<endl;
        cout<<"Year  : "<<year<<endl;
        cout<<"\n DDMMYY "<<day<<"/"<<month<<"/"<<year<<".";

    }
};

int main(){
    date ddmmyy(04,01,2006);

    return 0;
}