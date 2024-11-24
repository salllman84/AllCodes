#include<iostream>
#include<string>
using namespace std;



class firstString{
    string first;
    string second;

    public:
    void copyString(){
        first="Salman Khan Mulakheel";
        second=first;
        cout<<"first string : "<<first<<endl;
        cout<<"copy of first : "<<second<<endl;
    }

    void sizeString(){
        cout<<"size in memory of "<<"["<<second<<"] = "<<sizeof(second)<<endl;
        cout<<"Length of "<<"["<<second<<"] = "<< second.length();
    }
    
};

int main(){
    firstString aa;
    aa.copyString();
    aa.sizeString();

    return 0;
}