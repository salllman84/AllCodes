/*sum of array*/

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

cout<<"The sum of all elements of array is "<<sum;

return 0;

}