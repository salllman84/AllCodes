/* write a programe take input value and then take another input from the 
user to give a value and find the (index) of the given value. if it does not exist then 
print (the value does'nt exist) */


#include<iostream>
using namespace std;

int main()
{

    int numbers[4],i;
    cout<<"please enter the integer type values below"<<endl;

    for( i=0; i<4; i++)
    {
        cout<<"Please enter a value in ["<<i<<"] index: ";
        cin>>numbers[i];
    }

    int find;
    cout<<"please enter in integer vlaue to find the possition of the value : ";
    cin>>find;

    for (i=0; i<4; i++)
    {
        if (find==numbers[i])
        {
            cout<<"the value "<<find<<" is stored at possition "<<i;
            break;
        }

        
    }
        if(find != numbers[i])
        {
            
            cout<<"The number does not exist";
        
        }


}