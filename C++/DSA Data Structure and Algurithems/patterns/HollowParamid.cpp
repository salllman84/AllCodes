#include<iostream>
using namespace std;

int main(){
    int n=4;
    // /*  *
    //    * *
    //   *   *
    //  *     *
    // *       *
    //  *     *
    //   *   *
    //    * *
    //     *   


    for(int i=0; i<n; i++){
        // spaces
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<"*";
        // spaces
        if(i!=0){
        for(int k=0; k<2*i-1; k++){
            cout<<" ";
        }
        cout<<"*";
        }
        cout<<endl;
    }

    // bottom
    for(int i=0; i<n-1; i++){
        // spacess
for(int j=0; j<i+1; j++){
            cout<<" ";
        }
        cout<<"*";
    if(i!=n-2){
        // spaces
        for(int j=0; j<2*(n-2-i)-1; j++){
            cout<<" ";
        }
            cout<<"*";
    }

    cout<<endl;
    }
    return 0;
}