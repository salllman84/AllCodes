#include<iostream>
#include<vector>
using namespace std;

bool IsPossible (vector<int> &TotalPage, int TotalBooks, int TotalStudents, int midPages){ // (midpages = maxAllowedPages)
    int student = 1;
    int currentPages = 0;

    for(int i=0; i<TotalBooks; i++){
        // edge case
        if(TotalPage[i] > midPages){
            return false;
        }

        // max pages for every students
        if(currentPages + TotalPage[i] <= midPages){
            currentPages += TotalPage[i];
        } else{
            // asign pages to another student
            student ++;
            currentPages = TotalPage[i];
        }
    }
    // following this method of division, check if
    return student > TotalStudents ? false : true;
}

int AllocateBooks(vector<int> &TotalPage, int TotalBooks, int TotalStudents){
    // edge cases
    if(TotalStudents > TotalBooks){
        return -1;
    }
    int SumOfPages = 0;
    for(int i=0; i<TotalBooks; i++){
        SumOfPages += TotalPage[i];
    }
    int ans = -1;
    int start = 0;
    int end = SumOfPages;

    while(start <= end){
        int mid = start + (end-start)/2;
        if(IsPossible(TotalPage, TotalBooks, TotalStudents, mid)){
            ans = mid;
            // check if any other minimum value exist
            end = mid-1;
        } // is possible become false (mid) not exist to allcate books
          // find another mid, [may be minimum pages allocation found by following this division (another mid) ]
          else{
            start = mid+1;
          }
    }
    return ans;
}

int main(){
    vector<int> AllBooksPages = {10, 15, 11, 12, 20};
    int NumberOfBooks = 5;
    int TotalStudents = 3;

    int MinimumAllowedPages = AllocateBooks(AllBooksPages, NumberOfBooks, TotalStudents);
    cout << "Following this method, the minimum pages from maximum pages : " << MinimumAllowedPages << endl;

    return 0;
}