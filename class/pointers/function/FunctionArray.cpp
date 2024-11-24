#include<iostream>
using namespace std;

void findNumber(int Array[4],int num){
    bool found = false;
    for(int i=0; i<Array[4]; i++){
        if(num==Array[i]){
            found = true;
            cout<<num<<" is stored at cell number "<<i+1<<endl;
            
        }
// first way
          /*
        else{
            cout<<num<<" Not found";
            break;
        }
                */
// second way
        /*
        else{
            // found=false;
            cout<<num<<" Not found";
            break;
        }
    }
             */

}
// third way
             
            if(!found){
            cout<<num<<" Not found";
        }
}

int main(){
    int ArrayNumber[4], FindNum;

    cout<<"Enter number into Array\n";

    for(int i=0; i<4; i++){
        cout<<"Enter number into "<<i+1<<" cell : ";cin>>ArrayNumber[i];cout<<endl;
    }

    cout<<"Enter Number to find its Possition? : ";cin>>FindNum; cout<<endl;

    findNumber(ArrayNumber, FindNum);
}