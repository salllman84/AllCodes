#include <iostream>
using namespace std;
int main() {
   
    // int arr[5] = {5, 10, 15, 20, 25};
    // cout<< "Elements of Array = "<<endl;

    // for (int i=0; i<5; i++){
    //     cout<<arr[i];
    //     cout<<"\t";
    // }

    int salman[]={1,3,4,5,6,6,4,3,5};
    int sum=0;

    for(int i=0; i<9; i++)
    {
        sum+=salman[i];
       cout<<"the sum of all elements = "<<sum<<endl;
       
    }
    

    // int size_of_one=sizeof(salman) / sizeof(salman[0]);

    // cout<<"Size of all array = "<<sizeof(salman);
    // cout<<endl;
    // cout<<"Number of all element = "<<size_of_one;
    // cout<<endl;
    // cout<<"size of one element = "<<sizeof(salman[0]);

    return 0;
}
