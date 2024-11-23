// Pass by Value

#include<iostream>
#include<string>
using namespace std;

int Sum(int a, int b){
    int sum=a+b;
    return sum;
}

int main(int NoOfElements, char* PrintEle[] ){
    int a,b;
    cout<<"Enter any two numbers: ";cin>>a>>b;
    int sum=Sum(a,b);
    cout<<"Sum of "<<a<<"+"<<b<<" = "<<sum;

    cout<<"Number of Elements: "<<NoOfElements<<"\n";
    for (int i = 0; i < NoOfElements; i++)
    {
        cout<<"Data stored it ["<<i<<"]: "<<PrintEle[i]<<"\n";
    }
    

    return 0;
}