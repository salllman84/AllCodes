#include<iostream>
using namespace std;

int DeciToBin(int n){
    int ans=0;
    int placeValue=1;

    while(n>0){
        int reminder=n%2;
        ans+=(reminder*placeValue);
        
        n=n/2;
        placeValue*=10;
    }

    return ans;
}

int main(){
    
int num=6;
int BinNum=DeciToBin(num); // specific number
cout<<BinNum<<endl<<endl;

// using loop to print all number from 1 to 10;

cout<<"using loop to print all number from 1 to 10:\n";
for(int i=0; i<=11; i++){
    cout<<i<<" = "<<DeciToBin(i)<<endl;
}

return 0;

}