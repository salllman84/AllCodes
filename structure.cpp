/*  programe about to input data from user to store information about product
(name, price, quantity) using a structure and calculate the total cost. */


#include<iostream>
using namespace std;

struct product
{
    char name[20];
    int price[5];
    int quantity[5];
};

int main()
{
    product vegetables;

    for(int i=0; i<5; i++){
    cout<<"name of the product : ["<<i<<"] : ";
    cin>>vegetables.name;
    cout<<"price of the "<<vegetables.name<<" :";
    cin>>vegetables.price[i];
    cout<<"quantity of the "<<vegetables.name<<" : ";
    cin>>vegetables.quantity[i];
    }
    cout<<endl;
int total=0;

for(int j=0; j<5; j++){
    total+=(vegetables.price[j]*vegetables.quantity[j]);
}
cout<<"The total price of all products are : "<<total<<endl;



}
