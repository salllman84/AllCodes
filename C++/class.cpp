#include<iostream>
#include<string>

using namespace std;

class student {
    private:
        int rollno;
        int regnumber;

    public:
        void setrollno(int r)
        {
                rollno=r;
        }

        int getrollno()
        {
            return rollno;
        }
        void setregnumber(int reg)
        {
            regnumber=reg;
        }
        int getregnumber()
        {
            return regnumber;    
        }

};



int main(){
    student st1, st2;
    int roll, reg;

    // student 1 data
    cout<<"Enter student-1 roll number"<<endl;
    cin>>roll;
    cout<<"Enter student-1 registration number"<<endl;
    cin>>reg;

    cout<<endl<<endl;

    
    cout<<endl<<endl;
    cout<<"Student 1 Data"<<endl;

    st1.setrollno(roll);
    cout<<"student-1 roll number is : "<<st1.getrollno()<<endl;
    st1.setregnumber(reg);
    cout<<"student-1 registration number is : "<<st1.getregnumber()<<endl;

    // student 2 data
    cout<<"Enter student-2 roll number"<<endl;
    cin>>roll;
    cout<<"Ente student-2 registration number"<<endl;
    cin>>reg;

    cout<<endl<<endl;

    st2.setrollno(roll);
    cout<<"student-1 roll number is : "<<st2.getrollno()<<endl;
    st2.setregnumber(reg);
    cout<<"student-1 registration number is : "<<st2.getregnumber()<<endl;


    return 0;
}