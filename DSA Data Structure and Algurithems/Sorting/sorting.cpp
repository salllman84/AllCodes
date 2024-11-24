#include<iostream>
using namespace std;

// arr []= {3, 2, 5, 6, 1, 7, 4};

// 1. Bubble Sort
void BubbleSort(int arr[], int s){
    for(int i = 0; i<s-1; i++){
        bool Is_Swap = false;
        for(int j=0; j<s-1-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                Is_Swap = true;
            }
        }
        if(!Is_Swap){
            return;
        }
    }
}

// 2. Selection Sort
void SelectionSort(int arr[], int s){
    for(int i=0; i<s-1; i++){
        int curr = i;
        for(int j=i+1; j<s; j++){ // OR: for(int j=i; j<s; j++)
            if(arr[j] < arr[curr]){
                curr = j;
            }
        }
        swap (arr[i], arr[curr]);
    }
}

// 3. Insertion Sort

void insertionSort(int arr[], int s){
    for(int i=1; i<s-1; i++){
        int PostEle = arr[i]; // external pointer - to point that element and compare with all prev.. ele..
        int PreEle = i-1; // arr = {4, 3, 5, 6} PostEle = 3 then PreEle = 4

        while(PreEle >= 0 && arr[PreEle] > PostEle){
            // Shipt PreEle to the next index, to creat an empty space for PostEle
            arr[PreEle+1] = PostEle;
            PreEle --; // shipted to previous element
        }
        arr[PreEle+1] = PostEle; // putted current element (PostEle) at perfact place
    }
}

// Print
void PrintArr(int arr[], int s){
    for(int i=0; i<s; i++){
        cout<<arr[i]<<", ";
    }
}

int main(){
    int arr []= {3, 2, 5, 6, 1, 7, 4};
    int size = sizeof (arr)/ sizeof(arr[0]);

    
    BubbleSort(arr, size);
    cout<<"Bubble Sort\n";
    PrintArr(arr, size);
    
    SelectionSort(arr, size);
    cout<<"\nSelection Sort\n";
    PrintArr(arr, size);

    insertionSort(arr, size);
    cout<<"\nInsertion Sort\n";
    PrintArr(arr, size);

    return 0;
}