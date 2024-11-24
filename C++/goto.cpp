#include<iostream>
using namespace std;

// goto statement

int main(){
    int a,b;
cout<<"Enter two values ";
cin>>a>>b;

if(a>b){
    goto a;
}
else{
    goto b;
}

a:
cout<<"First value is greater."<<endl;
b:
cout<<"Second value is greater."<<endl;

return 0;
}