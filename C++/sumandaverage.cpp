#include<iostream>
using namespace std;

int main(){

int student[5], sum, max;
float avg;

for(int i = 0; i < 5; i++){
    cout<<"Enter the value an ["<<i<<"] = ";
    cin>>student[i];
}
sum=0;
for(int s = 0; s < 5; s++){
    sum += student[s];
}

max=0;
for(int k=0; k<5; k++){
    if(student[k]>max){
        max = student[k];
    }
}

avg = sum/5.0;
cout<<"The sum of all elements of the data is = "<< sum <<endl;
cout<<"The average of all elements of the data = "<< avg<<endl;
cout<<"The maximum value is = "<<max;
    return 0;
}