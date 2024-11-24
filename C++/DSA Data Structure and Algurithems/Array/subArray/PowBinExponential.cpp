#include<iostream>
using namespace std;
// O(log n)
int NumPow(int n, int p){
    int binaryOf = p;//3
    int AnsOfN = 1;
for(;binaryOf>0;){// 3,1
    if(binaryOf%2==1){
        AnsOfN*=n;//1*5=5
                  //5*25=125
        
    }
    n *= n;//125*125= ....
    binaryOf/=2;// 1
}

return AnsOfN;

}

int main(){
    int num=5, exp=3;
    int PowByBin = NumPow(num, exp);
    cout<<num<<"^"<<exp<<" : "<<PowByBin;

    return 0;
}