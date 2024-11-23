#include<iostream>
using namespace std;

int numpow(int n, int p){
    int ans=1;
    for(int i=0; i<p; i++){ // increasing in (p) will increase the operation...
                            // So time complexity = O(n)
        ans*=n;
    }

    return ans;
}

int main(){
    int num=10, pw=4;

    int Ans=numpow(num, pw);
    cout<<"power of "<<num<<"^"<<pw<<": "<<Ans;

    return 0;
}