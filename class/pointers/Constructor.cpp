#include<iostream>
using namespace std;

class shayan{
    int rollno;
    string name;
    public:
    shayan(string b, int a){
        rollno = a;
        name = b;
    }

    void GetDetails(){
        cout<<"Name : "<<name<<endl;
        cout<<"Roll number of "<<name<<" ; "<<rollno<<endl;
    }
};
int main(){
    shayan obj("shayan", 44);
    obj.GetDetails();
}
