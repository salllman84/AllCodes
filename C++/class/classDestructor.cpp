#include<iostream>
using namespace std;

class student{
    int totalMarks;
    int avgMarks;
    int*p;
    public:

    void calcAvg(int* nOfsubject){
        p = new int[*nOfsubject];
        totalMarks=0; avgMarks=0;

        for(int i=0; i<*nOfsubject; i++){
            cout<<"enter marks of subject number "<<i+1<<endl;
            cin>>p[i];
            totalMarks+=p[i];
            cout<<endl;
        }
        
        for(int i=0; i<*nOfsubject; i++){
            cout<<p[i]<<" is saved at location : "<<p+i;
            cout<<endl;
        }
        
        avgMarks= totalMarks/(*nOfsubject);
        cout<<"Total marks = "<<totalMarks<<endl;
        cout<<"avg marks = "<<avgMarks<<endl;
    }

    ~student(){
        delete[] p;
        cout<<"dynamic memory is released\n";
    }

};

int main(){
    int n;
    int* ptr;
    ptr = &n;
    cout<<"please provide the number of subjects\n";
    cin>>*ptr;
    student s1;
    s1.calcAvg(ptr);

}

/*

please provide the number of subjects
4
enter marks of subject number 1
56

enter marks of subject number 2
87

enter marks of subject number 3
38

enter marks of subject number 4
57

-1338738073 is saved at location : 0xfe13e8
32663 is saved at location : 0xfe13ec
16651344 is saved at location : 0xfe13f0
16646336 is saved at location : 0xfe13f4
Total marks = 238
avg marks = 59
dynamic memory is released

*/