#include<iostream>
using namespace std;

int main(){
char first[10],second[10];
cout<<"enter character type value into each element."<<endl;

for(int i=0; i<10; i++){
    cout<<"Enter character into ["<<i<<"] = ";
    cin>>first[i];
}
cout<<endl;
cout<<"Copy value from First into second"<<endl;
for(int j=0; j<10; j++){
    second[j]=first[j];
    cout<<second[j]<<"\t";
}
    return 0;
}