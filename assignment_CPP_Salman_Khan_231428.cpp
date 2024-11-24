/*
              Name:                 Salman Khan
              Roll no:              231428
              Assignment:           Fundamental of Programming
              Section:              'B'
              Assignment of:        Dr.Israr Iqbal Aiwan
              Submitted to:         Cr Saad Ahamad
              Submission Deadline:  4th March 2024
              Submission time/date: 12:38 am  Feb 28 2024    
*/


                                           // QNO 1.

#include<iostream>
using namespace std;

int main(){

    int arr[5];
    cout<<"Please Enter only integer type value"<<endl;

    for(int s=0; s<5; s++){
        cout<<"Enter the value in ["<<s<<"] : ";
        cin>>arr[s];
    }

    int total;
    total=0; 
    for(int t=0; t<5; t++){
        total+=arr[t];
    }
    cout<<endl;

    cout<<"The sum of all elements of the given data is = "<<total;

return 0;
}

                 // ★★★★★★★★★★★★

                    

// Qno3

#include<iostream>
using namespace std;

struct student
{
    string name;
    int rollno;
    int marks[5];
};


int main(){

    student salman;
    student usman;
    student hidayat;

// First Student Data
    cout<<"Enter name of the student : ";
    cin>>salman.name;
    cout<<"Enter roll number of "<<salman.name<<" : ";
    cin>>salman.rollno;
    
// Input Marks
    for(int m=0; m<5; m++){
        cout<<"Enter marks of "<<salman.name<<" in the ["<<m<<"]  Space : ";
        cin>>salman.marks[m];
    }

    int salman_sum=0;
    for(int s=0; s<5; s++){
        salman_sum+=salman.marks[s];

    }
    int salman_avg=0;
    for(int a=0; a<5; a++){
        salman_avg=salman_sum/5;
    }

// Second Student Data
    cout<<"Enter name of the student : ";
    cin>>usman.name;
    cout<<"Enter roll number of "<<usman.name<<" : ";
    cin>>usman.rollno;
    
// Input Marks
    for(int m2=0; m2<5; m2++){
        cout<<"Enter marks of "<<usman.name<<" in the ["<<m2<<"]  Space : ";
        cin>>usman.marks[m2];
    }

    int usman_sum=0;
    for(int s2=0; s2<5; s2++){
        usman_sum+=usman.marks[s2];

    }
    int usman_avg=0;
    for(int a2=0; a2<5; a2++){
        usman_avg=usman_sum/5;
    }

// Third Student Info
    cout<<"Enter name of the student : ";
    cin>>hidayat.name;
    cout<<"Enter roll number of "<<hidayat.name<<" : ";
    cin>>hidayat.rollno;
    
// Input Marks
    for(int m3=0; m3<5; m3++){
        cout<<"Enter marks of "<<hidayat.name<<" in the ["<<m3<<"]  Space : ";
        cin>>hidayat.marks[m3];
    }

    int hidayat_sum=0;
    for(int s3=0; s3<5; s3++){
        hidayat_sum+=hidayat.marks[s3];

    }

    int hidayat_avg=0;
    for(int a3=0; a3<5; a3++){
        hidayat_avg=hidayat_sum/5;
    }

// Average marks of each student
    
    cout<<"average marks of "<<salman.name<<" is = "<<salman_avg<<endl;
    cout<<"average marks of "<<usman.name<<" is = "<<usman_avg<<endl;
    cout<<"average marks of "<<hidayat.name<<" is = "<<hidayat_avg<<endl;

// Greatest avg. Marks

if(salman_avg>usman_avg && salman_avg>hidayat_avg) 
    {
        cout<<salman.name<<" has the highest average marks= "<<salman_avg<<endl;
    } else if(usman_avg > salman_avg && usman_avg > hidayat_avg) 
    {
        cout<<usman.name<<" has the highest average marks= "<<usman_avg<<endl;
    } else 
    {
        cout<<hidayat.name<<" has the highest average marks= "<<hidayat_avg<<endl;
    }

    return 0;
}

                     // ★★★★★★★★★★★★
// Question 2

#include <iostream>
using namespace std;

int main() {
    
    int arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    
//  sum of each row will store here
    int sum_of_row[3] = {0};

//  sum of each column will store here
    int sum_of_column[3] = {0};

// Initialize with first element
    int max_value = arr[0][0]; 

// Calculating sum of each row and column
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum_of_row[i] += arr[i][j];
            sum_of_column[j] += arr[i][j];
            
            
        }
    }
    
//  using loop to find maximum value
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++){
            if (arr[i][j] > max_value) {
                max_value = arr[i][j];
            }
        }
    }
// Print sum of each row
    cout << "Sum of each row is below" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "sum of row number [" << i << "] = " << sum_of_row[i] << endl;
    }
    
    
// Print sum of each column
    cout << "Sum of each column is below" << endl;
    for (int j = 0; j < 3; j++) {
        cout << "sum of Column number [" << j << "] = " << sum_of_column[j] << endl;
    }

//  Print maximum value in the matrix
    cout << "Maximum value in the matrix = " << max_value << endl;

    return 0;
}


                     // ★★★★★★★★★★★★

// Qno 4


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

// input all information of every book it once
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
    cout<<endl;

    string isbn;
    cout << "Please enter an ISBN code to find book in the library if it exists: ";
    cin >> isbn;

    cout<<endl;
    cout<<endl;

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
            break;         
        }
    }

    if(!found)
    {
        cout << "Ops! Sorry this book is not available." << endl;
    }

    return 0;
}                             

                          // ★★★★★★★★★★★★
