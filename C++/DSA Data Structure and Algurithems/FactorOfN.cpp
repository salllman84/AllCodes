#include<iostream>
using namespace std;

int main(){
    cout<<"Enter a number to find its factors: ";
    int n;
    cin>>n;

    if(n<=1){
        cout<<"No factors!";
    }
    else{
        for(int i=1; i<=n; i++){
            if(n%i==0){
                cout<<i<<"\t";
            }
        }
    }

    return 0;
}