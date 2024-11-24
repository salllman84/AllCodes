#include<iostream>
using namespace std;

int main()
{
    const int size = 2; // Change this value to match the size of your array
    
    int user[size];
    
    // Initialize array with user input values
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value in [" << i << "] = ";
        cin >> user[i];
    }

    // Display the elements of the array
    cout << "Array elements:";
    for(int m = 0; m < size; m++)
    {
        cout << " " << user[m];
    }
    cout << endl;

    // Find the sum of all elements in the array
    int sum = 0;
    for(int j = 0; j < size; j++)
    {
        sum += user[j];
    }
    cout << "The sum of all elements = " << sum << endl;

    // Find the largest element in the array
    int largest = user[0];
    for(int k = 1; k < size; k++)
    {
        if(user[k] > largest)
        {
            largest = user[k];
        }
    }
    cout << "The largest element in the array is = " << largest << endl;

    // Find the smallest element in the array
    int smallest = user[0];
    for(int s = 1; s < size; s++)
    {
        if(user[s] < smallest)
        {
            smallest = user[s];
        }
    }
    cout << "The smallest element in the array is = " << smallest << endl;

    // Search for a specific element in the array and display its index
    int find_number;
    cout << "Enter the number to search for: ";
    cin >> find_number;

    bool found = false;
    for(int l = 0; l < size; l++)
    {
        if(find_number == user[l])
        {
            found = true;
            cout << "The value " << find_number << " is at index " << l << endl;
            break;
        }
    }

    if(!found)
    {
        cout << "The value " << find_number << " does not exist in the array." << endl;
    }

    return 0;
}
