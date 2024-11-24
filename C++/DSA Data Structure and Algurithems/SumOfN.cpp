#include<iostream>
using namespace std;

int main(){
int n, sum=0;
cout<<"Enter a number if it is devisible by 3\n"<<endl;
cout<<"to find its sum from 1 to your entered number: ";

cin>>n;

if(n%3==0){
    for(int i=1; i<=n; i++){
        sum+=i;
    }
    cout<<"The Sum from 1 to "<<n<<" = "<<sum;
}
else{
    cout<<"Not divisible by 3";
}

return 0;

}