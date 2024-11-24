#include<iostream>
#include<vector>
using namespace std;

vector<int> ProductOfVec(vector<int> Vect){
    int size = Vect.size();
    vector<int> Ans(size, 1);  // Initialize Ans with size 'size', all values set to 1
    
    // Outer loop to iterate over the vector
    for(int i = 0; i < size; i++){
        // Inner loop to multiply all elements except Vect[i]
        for(int j = 0; j < size; j++){
            if(i != j){
                Ans[i] *= Vect[j];  // Multiply Ans[i] with Vect[j]
            }
        }
    }
    return Ans;  // Return the result vector
}

int main(){
    vector<int> Vec = {1, 2, 3, 4};
    vector<int> Result = ProductOfVec(Vec);  // Call the function
    
    // Print the result vector
    for(int i = 0; i < Result.size(); i++) {
        cout << Result[i] << " ";
    }
    return 0;
}
