#include<iostream>
using namespace std;

int main(){
    int n, sum=0;
    cout<<"Enter Number to add its number which is devisible by 3:";
    cin>>n;
if(n<=2){
        cout<<"not divisible";
    } else{
    for(int i=3; i<=n; i++){
        if(i%3==0){
            sum+=i;
        }
    }
    cout<<"Sum of all number in b/w "<<n<<" which is devisible by 3 = "<<sum;
    }
    return 0;
}