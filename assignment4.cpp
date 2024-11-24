#include<iostream>
#include<string>
using namespace std;

struct book
{
    string title;
    string auther;
    string isbn;
    int year_of_pulication;
};

int main()
{

    book book_name[5];

    cout<<"please enter the detail of all books."<<endl;

    for(int i=0; i<5; i++)
    {
        cout<<"Enter the Title of of Book number ["<<i+1<<"] = ";
        cin>>book_name[i].title;
        cout<<"Enter the name of Auther of "<<book_name[i].title<<" book = ";
        cin>>book_name[i].auther;
        cout<<"Enter the ISBN code of "<<book_name[i].title<<" book = ";
        cin>>book_name[i].isbn;
        cout<<"please enter the year of pulication of "<<book_name[i].title<<" = ";
        cin>>book_name[i].year_of_pulication;
    }

        cout<<endl;

    cout<<"The detail of all books in library is below."<<endl;
    for(int j=0; j<5; j++)
    {
        cout<<"Title of Book = "<<book_name[j].title<<endl;
        cout<<"auther of = "<<book_name[j].title<<"  "<<book_name[j].auther<<endl;
        cout<<"isbn code of = "<<book_name[j].title<<"  "<<book_name[j].isbn<<endl;
        cout<<"year of publcation of = "<<book_name[j].title<<"  "<<book_name[j].year_of_pulication<<endl;
        cout<<endl;
    }

    string isbn;
    cout << "Please enter an ISBN code to find book in the library if it exists: ";
    cin >> isbn;

    bool found = false;
    for(int k = 0; k < 5; k++)
    {
        if(isbn == book_name[k].isbn)
        {
            found = true;
            cout << "Here are the details of the book with ISBN " << isbn << ":" << endl;
            cout << "Title: " << book_name[k].title << endl;
            cout << "Author: " << book_name[k].auther << endl;
            cout << "Year of Publication: " << book_name[k].year_of_pulication << endl;
            break; // Stop searching once the book is found
        }
    }

    if(!found)
    {
        cout << "Ops! Sorry this book is not available." << endl;
    }

    return 0;
}
