            /*Question 1*/


#include <iostream>

int main() {
    const int SIZE = 5;
    int arr[SIZE];
    int sum = 0;

    
    std::cout << "Enter " << SIZE << " integers:\n";
    for (int i = 0; i < SIZE; ++i) {
        std::cin >> arr[i];
    }

    
    for (int i = 0; i < SIZE; ++i) {
        sum += arr[i];
    }

    
    std::cout << "The sum of all elements in the array is: " << sum << std::endl;

    return 0;
}


                 /*****************************************/

                    // question no 2


#include <iostream>
#include <limits>

using namespace std;

const int ROWS = 3;
const int COLS = 3;

int main() {
    int matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    
    cout << "Sum of each row:" << endl;
    for (int i = 0; i < ROWS; ++i) {
        int rowSum = 0;
        for (int j = 0; j < COLS; ++j) {
            rowSum += matrix[i][j];
        }
        cout << "Row " << i+1 << ": " << rowSum << endl;
    }

    cout << "\nSum of each column:" << endl;
    for (int j = 0; j < COLS; ++j) {
        int colSum = 0;
        for (int i = 0; i < ROWS; ++i) {
            colSum += matrix[i][j];
        }
        cout << "Column " << j+1 << ": " << colSum << endl;
    }

    
    int maxVal = numeric_limits<int>::min();
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            if (matrix[i][j] > maxVal) {
                maxVal = matrix[i][j];
            }
        }
    }
    cout << "\nMaximum value in the matrix: " << maxVal << endl;

    return 0;
}

                    /*****************************************/



                    // question no 3

#include <iostream>
#include <string>
#include <limits> 

using namespace std;


struct Student {
    string Name;
    int RollNumber;
    int Marks[5];
};

int main() {
    
    Student students[3];

    
    for (int i = 0; i < 3; ++i) {
        cout << "Enter details for student " << i+1 << ":" << endl;
        cout << "Name: ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin, students[i].Name);
        cout << "Roll Number: ";
        while (!(cin >> students[i].RollNumber)) {
            cout << "Invalid input. Please enter an integer." << endl;
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Roll Number: ";
        }
        cout << "Enter marks for 5 subjects: ";
        for (int j = 0; j < 5; ++j) {
            while (!(cin >> students[i].Marks[j])) {
                cout << "Invalid input. Please enter an integer." << endl;
                cin.clear(); 
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
                cout << "Enter marks for subject " << j+1 << ": ";
            }
        }
    }

    
    double highestAverage = 0.0;
    int highestIndex = -1;

    for (int i = 0; i < 3; ++i) {
        double totalMarks = 0.0;
        for (int j = 0; j < 5; ++j) {
            totalMarks += students[i].Marks[j];
        }
        double average = totalMarks / 5.0;
        cout << "Average marks for student " << students[i].Name << ": " << average << endl;
        if (average > highestAverage) {
            highestAverage = average;
            highestIndex = i;
        }
    }

    
    cout << "Student with the highest average marks:" << endl;
    cout << "Name: " << students[highestIndex].Name << endl;
    cout << "Roll Number: " << students[highestIndex].RollNumber << endl;
    cout << "Average Marks: " << highestAverage << endl;

    return 0;
}

                /*****************************************/


                    // Question number 4

#include <iostream>
#include <string>

using namespace std;


struct Book {
    string Title;
    string Author;
    string ISBN;
    int YearOfPublication;
};

int main() {
    
    Book library[5];
    for (int i = 0; i < 5; ++i) {
        cout << "Enter details for book " << i+1 << ":" << endl;
        cout << "Title: ";
        cin.ignore();
        getline(cin, library[i].Title);
        cout << "Author: ";
        getline(cin, library[i].Author);
        cout << "ISBN: ";
        getline(cin, library[i].ISBN);
        cout << "Year of Publication: ";
        cin >> library[i].YearOfPublication;
    }

    
    cout << "\nDetails of all books in the library:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Book " << i+1 << ":" << endl;
        cout << "Title: " << library[i].Title << endl;
        cout << "Author: " << library[i].Author << endl;
        cout << "ISBN: " << library[i].ISBN << endl;
        cout << "Year of Publication: " << library[i].YearOfPublication << endl;
        cout << endl;
    }

    
    string searchISBN;
    cout << "Enter ISBN to search for a book: ";
    cin >> searchISBN;

    bool found = false;
    for (int i = 0; i < 5; ++i) {
        if (library[i].ISBN == searchISBN) {
            cout << "\nBook found:" << endl;
            cout << "Title: " << library[i].Title << endl;
            cout << "Author: " << library[i].Author << endl;
            cout << "ISBN: " << library[i].ISBN << endl;
            cout << "Year of Publication: " << library[i].YearOfPublication << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Book with ISBN " << searchISBN << " not available in the library." << endl;
    }

    return 0;
}


                                        // END