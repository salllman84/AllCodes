#include<iostream>
using namespace std;

class costumer_total_salary{
    int basicPay;
    string name;

    public:
    float houseRent;
    float medicalAllownce;
    int   grossPay;

    void get_costumerdetails();
    void get_houseRent();
    void get_medicalAllownce();
    void get_grossPay();

    void give_costumerdetails();
    void give_houseRent();
    void give_medicalAllownce();
    void give_grossPay();

};

void costumer_total_salary::get_costumerdetails(){
    cout<<"Enter name of the costumer : ";
    cin>>name;
    cout<<"Enter "<<name<<" Current sallary : ";
    cin>>basicPay;
}

void costumer_total_salary::get_houseRent(){
    houseRent=basicPay*60/100.0;
}

void costumer_total_salary::get_medicalAllownce(){
    medicalAllownce=basicPay*20/100.0;
}

void costumer_total_salary::get_grossPay(){
    grossPay=basicPay+medicalAllownce+houseRent;
}

void costumer_total_salary::give_costumerdetails(){
    cout<<"Name of costumer = "<<name<<endl;
    cout<<"Basic pay of "<<name<<" = "<<basicPay<<endl;
}

void costumer_total_salary::give_houseRent(){
    cout<<"House rent of "<<name<<" = "<<static_cast<float>(houseRent)<<endl;
}

void costumer_total_salary::give_medicalAllownce(){
    cout<<"Medical allownce of "<<name<<" = "<<static_cast<float>(medicalAllownce)<<endl;
}

void costumer_total_salary::give_grossPay(){
    cout<<"Gross payment of "<<name<<" = "<<grossPay<<endl;
}

int main(){
    costumer_total_salary   costumer;
    costumer.get_costumerdetails();
    costumer.get_houseRent();
    costumer.get_medicalAllownce();
    costumer.get_grossPay();

    cout<<endl<<endl;

    costumer.give_costumerdetails();
    costumer.give_houseRent();
    costumer.give_medicalAllownce();
    costumer.give_grossPay();



    return 0;
}