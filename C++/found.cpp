#include<iostream>
using namespace std;

int main(){
int number[4],finder;

for(int i=0; i<4; i++){

    cout<<"enter vlaue in ["<<i<<"] = ";
    cin>>number[i];
}
cout<<endl;
cout<<"Enter a value to find its location = ";
cin>>finder;

bool find=false;
for(int i=0; i<4; i++){
    if(finder==number[i]){
        find=true;
        cout<<"The number "<<finder<<" stored in = ["<<i<<"]";
        break;
    }
    
}
if(!find){
        cout<<"Not exist";
    }
    return 0;
}