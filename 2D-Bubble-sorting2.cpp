#include<iostream>
using namespace std;

int main(){

    int std_Marks[5][4]={{88, 99, 100, 79},
                         {54, 36, 63, 39},
                         {78, 25, 63, 64},
                         {74, 37, 47, 42},
                         {74, 64, 35, 64}};

        for(int counter=1; counter<4; counter++){
            for(int i=0; i<5; i++){
                for(int j=0; j<4-counter; j++){
                    if(std_Marks[i][j]>std_Marks[i][j+1]){
                        int temp=std_Marks[i][j];
                        std_Marks[i][j]=std_Marks[i][j+1];
                        std_Marks[i][j+1]=temp;
                    }
                }
            }
        }
cout<<endl;
        for(int i=0; i<5; i++){
            for (int j=0; j<4; j++){
                cout<<std_Marks[i][j]<<" ";
            }

            cout<<endl;
        }

    return 0;
}