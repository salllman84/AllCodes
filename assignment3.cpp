#include <iostream>
using namespace std;

int main() {
    /* Declare and initialize a 3x3 matrix */
    int arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    
    /*  sum of each row will store here */
    int sum_of_row[3] = {0};
    /*  sum of each column will store here */
    int sum_of_column[3] = {0};
    /* Initialize max_value with the first element of the array to find maximum value*/
    int max_value = arr[0][0]; 

    /* Calculating sum of each row and column */
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum_of_row[i] += arr[i][j];
            sum_of_column[j] += arr[i][j];
            
            
        }
    }
    
    /*  using loop to find maximum value in all elelments */
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++){
            if (arr[i][j] > max_value) {
                max_value = arr[i][j];
            }
        }
    }
    /* Print sum of each row */
    cout << "Sum of each row is below" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "sum of row number [" << i << "] = " << sum_of_row[i] << endl;
    }
    
    
    /* Print sum of each column */
    cout << "Sum of each column is below" << endl;
    for (int j = 0; j < 3; j++) {
        cout << "sum of Column number [" << j << "] = " << sum_of_column[j] << endl;
    }

    /* Print maximum value in the matrix */
    cout << "Maximum value in the matrix = " << max_value << endl;

    return 0;
}
