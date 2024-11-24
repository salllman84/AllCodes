/*average of array*/
#include<iostream>
using namespace std;

int main(){

int numbers[5];

cout<<"please enter upto 5 values"<<endl;
for( int i=0; i<5; i++){
    cout<<"enter the value of ["<<i<<"] : ";
    cin>>numbers[i];
}

int sum;
sum=0;

for(int j=0; j<5; j++){
    sum+=numbers[j];
}

float avg=0.0;
avg=sum/5;
cout<<"the sum of all elements = "<<sum<<endl;
cout<<"The average of the values is "<<avg;

return 0;

}