#include<iostream>
#include<string>
using namespace std;

struct book{
    string title;
    string author;
    string pubYear;
};

int main(){
    book book1;
    cout<<"Enter book title."<<endl;
    cin>>book1.title;
    cout<<"Enter author of "<<book1.title<<"."<<endl;
    cin>>book1.author;
    cout<<"Enter "<<book1.title<<" publication year "<<endl;
    cin>>book1.pubYear;

    cout<<endl<<endl;
    cout<<"Book Details are below."<<endl;
    cout<<"Title            : "<<book1.title<<endl;
    cout<<"Author           : "<<book1.author<<endl;
    cout<<"Publication year : "<<book1.pubYear;

    return 0;
}