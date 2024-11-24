#include<iostream>
using namespace std;

int main(){
int first[5], second[5],third[5];

cout<<"Enter the values in first array"<<endl;

for(int i=0; i<5; i++){

    cout<<"Enter value in ["<<i<<"] = ";
    cin>>first[i];

}
cout<<endl;

cout<<"Enter the value in Second array"<<endl;
for(int j=0; j<5; j++){
    cout<<"enter the vlaue in ["<<j<<"] = ";
    cin>>second[j];
}
cout<<endl;

cout<<"Sum of both array values stored in third array "<<endl;


for(int k=0; k<5; k++){
    third[k]=first[k]+second[k];
    cout<<first[k]<<" + "<<second[k]<<" = "<<third[k]<<endl;
}


    return 0;
}