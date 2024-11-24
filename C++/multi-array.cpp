#include<iostream>
using namespace std;

int main()
{
    
    int student[4][6];
    cout<<"Enter the detail of the student below: "<<endl;

    for(int row=0; row<2; row++)
    for(int columns=0; columns<3; columns++)
    {
        cout<<"please enter the value in ["<<row<<"] ["<<columns<<"] : "; 
        cin>>student[row][columns];
    }

    cout<<"the complete detail of your enter data is below: "<<endl;
    for(int r=0; r<2; r++)
    for(int c=0; c<3; c++)
    
    {
        cout<<"The data in ["<<r<<"]["<<c<<"] is : "<<student[r][c]<<endl;
    }
    int maximum=0;
    for(int r=0; r<2; r++)
    for(int c=0; c<3; c++)
    {
        if(maximum<student[r][c])
        {
            maximum=student[r][c];
        }
    }    
    cout<<" The maximum value from the above data is : "<<maximum;
    
    
    return 0;
}