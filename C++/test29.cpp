// #include<iostream>
// using namespace std;

// /* Printing array in reverse */

// int main ()
// {

    
//     int array[6] = {11, 22, 33, 44, 55, 66};
    
    
//     /*int i=5;
//     cout<<" the value in reverse form is below."<<endl;
//     while(i>=0)
//     {
//         cout<<array[i]<<endl;
//         --i;
//     }

//     */

//    /* Sum of even numbers if exist in an arrray */

//    int sum = 0;

   

//     for(int i=0; i<6; i++)

//     if (array[i] % 2 == 0)
//     {
//         sum += array[i];
//         cout<<"the sum of even numbers is = "<< sum <<endl;

//         if(array[i] % 2 != 0)
//         {
//             cout<<"not found any even numbers."<<endl;
//             break;
//         }

//     }

//     return 0;
// }





    /* Find the value of an array */


#include<iostream>
using namespace std;

int main () 
{
    // float abc[5], sum, avg;
    // int i;

    // for (i=0; i<=4; i++)
    // {
    //     cout<<"Enter the value in element= "<<i<<endl;
    //     cin>>abc[i];
    // }
    // sum =0.0;
    // avg= 0.0;

    // for(i=0; i<5; i++)
    // {
    //     sum = sum+abc[i];
    // }

    // avg=sum/5.0;
    // cout<<"sum of array vlues= "<<sum<<endl;
    // cout<<"Arverage of array value= "<<avg;


                        /****************************************************/

    float abc[5], max;
    int i;

    for (i=0; i<=4; i++)
    {
        cout<<"Enter the vlaue of an element= "<<i<<endl;
        cin>> abc[i];
    }

    max= abc[0];
    for(i=1; i<4; i++)
    {
        if (max<abc[i])
        max=abc[i];
    }

    cout<<"maximum value is = " <<max;

    return 0;
}
    








