#include<iostream>
#include<vector>
using namespace std;

bool MidIsValid(vector<int> & BooksPages, int TotalBooks, int TotalStudents, int MaxAllowedPages){
    // allocate books to each student
    int newStudent = 1;
    int AssignPages = 0;

    for(int i=0; i<TotalBooks; i++){
        // edge case
        if(BooksPages[i] > MaxAllowedPages){
            return false; // edge case end
        } else if(AssignPages + BooksPages[i] <= MaxAllowedPages){
            AssignPages += BooksPages[i];
        } else {
            newStudent++; // assign to another student if limit exceed of maxallowedpages
            AssignPages = BooksPages[i];
        }
    }
    return newStudent > TotalStudents ? false : true;
}

int AllocateBooks(vector<int> & BooksPages, int TotalBooks, int TotalStudents){
    // edge case
    if(TotalStudents > TotalBooks){
        return -1;
    }
    // Total number of pages
    int TotalNumberOfPages = 0;
    for(int i=0; i<TotalBooks; i++){
        TotalNumberOfPages += BooksPages[i];
    }

    int ans = -1;
    int start = 0;
    int end = TotalNumberOfPages;

    while(start <= end){
        int mid = start + (end - start)/2;
        if(MidIsValid(BooksPages, TotalBooks, TotalStudents, mid)){
            ans = mid;
            // is there any other minimum values exists
            end = mid-1;
        }else{
            // midisValid() = false
            // search for another value in right side
            start = mid+1;
        }
    }
    return ans;
}

int main(){
    vector<int> BookPages = {10, 15, 11, 12, 20};
    int TotalBooks = 5;
    int TotalStudents = 3;

    cout<<AllocateBooks(BookPages, TotalBooks, TotalStudents) << endl;

    return 0;
}