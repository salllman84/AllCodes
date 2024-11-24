#include<iostream>
using namespace std;

class studentdata{
    string name;
    int rollno;

    public:
    void getdata();
    void givedata();
};

void studentdata::getdata(){
    cout << "Enter name of the student : "<<endl;
    cin>>name;
    cout << "Enter Roll number of "<<name<< " : "<<endl;
    cin >> rollno;
    cout<<endl<<endl;
}

void studentdata::givedata(){
    cout << "Name = "<< name<<endl;
    cout << "Roll number = "<<rollno<<endl<<endl;
}

int main(){
    studentdata numberof_student[3];

    for(int i=0; i<3; i++){
        numberof_student[i].getdata();
    }
    cout<< "\nStudent data are below"<<endl;
    for(int i=0; i<3; i++){
        numberof_student[i].givedata();
    }

    return 0;
}