#include<iostream>
using namespace std;

int main(){
    int arr[3];
    int findArr;
    bool found = false; 

    for(int i=0; i<3; i++){
        cout<<"Enter value in index number ["<<i<<"] = ";
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Enter a value to find its index: ";
    cin>>findArr;

    for(int j=0; j<3; j++){
        if(findArr == arr[j]){
            cout<<"\n"<<findArr<<" is saved on index number ["<<j<<"]";
            found = true; // we make found=true to compare all values. if its true it will print, if not it 
                        // will go to the next block.
        }
    }

    if(!found)
    // not found means to convert found into true if the above condition is false and print the messege
     {
        cout<<"Not found!";
    }

    return 0;
}
