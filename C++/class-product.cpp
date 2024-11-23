#include<iostream>
using namespace std;

class product{

    private:
    int price;

    public:
    void getdata(int a){
        // cout<<"enter price of book : ";
        // cin>>price;
        price=a;
    }

    void givedata(){
        cout<<"\nthe price of book is : "<<price;
    }

    product add(product a){
        

        return ;
    }
};

int main(){
    product p1,p2,p3;

    p1.getdata(50);
    p2.getdata(100);
    p1.givedata();
    p2.givedata();
    p3=p1.add(p2);

    return 0;
}