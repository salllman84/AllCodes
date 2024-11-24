#include<iostream>
using namespace std;

int main(){
cout<<"Enter number to find its factorial: ";
int n;
cin>>n;
int factOf=1;

if(n<1){
    cout<<"No Factorial";
}

else{
    for(int i=1; i<=n; i++){
            factOf*=i;
    }
    cout<<"Factorial of "<<n<<" = "<<factOf;
}

return 0;

}