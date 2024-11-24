#include <iostream>
using namespace std;
int main ()
{   /* initializing and declaring array  */
    int arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int r,c,max;

    int sum_of_row=0;
    int sum_of_columns=0;
    /* first loop used for to find the sum of rows  */
    for(r=0; r<3; r++)
    {
        sum_of_row+=arr[r][c];
        /* the second loop used to find the sum of columns  */
        for(c=0; c<3; c++)
        {
        if(r==0 && c==0){
            sum_of_columns+=arr[c][r];
        }
        if(r==0 && c==1){
            sum_of_columns+=arr[c][r];
        }

        if (r==0 && c==2){
            sum_of_columns+=arr[c][r];
        }
        }
    
    
    }
    /*  Here i used a loop to compare all the elements with each other to find the 
    the greatest element */
    max=0;
    for(int row=0; row<3; row++){
        for(int column=0; column<3; column++){
            if(arr[row]>arr[column]){

            }
        }
    }

    cout<<"The sum of rows are below"<<endl;

    /* this loop is used to print sum of each row  */

    for(r=0; r<3; r++){
        cout<<"The sum of row number ["<<r<<"] = "<<sum_of_row<<endl;
    }
    /* this loop is used to print sum of each column */
    cout<<"The sum of columns are below "<<endl;
    for(c=0; c<3; c++){
        cout<<"The of column number ["<<c<<"] = "<<sum_of_columns<<endl;
    }
    /*  printing the maximum value in all elements of the array */
    cout<<"The maximum value in all elements is = "<<max;


    return 0;
}