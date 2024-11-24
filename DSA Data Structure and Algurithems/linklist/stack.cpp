#include <iostream>
using namespace std;
//Stack Applications
/*
1.  Balancing of symbols
2.  Infix-to-postfix conversion
3.  Implementing function calls (including recursion)
4.  Page-visited history in a Web browser [Back Buttons]
5.  Undo sequence in a text editor
6.  Matching Tags in HTML and XML

*/
// Define the maximum size of the stack
#define MAX 1000

// Stack class definition
class Stack
{
    int top;  // To keep track of the top index
public:
    int arr[MAX];  // Stack array to hold elements

    // Constructor to initialize the stack
    Stack()
    {
        top = -1;
    }
// Push operation: Adds an element to the top of the stack
void push(int x)
{
    if (isFull())
        {
        cout << "Stack Overflow\n";
        }
    else
        {
        arr[++top] = x;  // Increment top and add element
        cout << "Pushed "<<x << "\n";
        }
}

// Pop operation: Removes and returns the top element
int pop()
{
    if (isEmpty())
        {
        cout << "Stack Underflow\n";
        return -1;  // Stack is empty, nothing to pop
        }
    else
        {
        int x = arr[top--];  // Return top element and decrement top
        return x;
        }
}

// Peek operation: Returns the top element without removing it
int top_element()
{
    if (top < 0)
        {
        cout << "Stack is Empty\n";
        return -1;  // Stack is empty
        }
    else
        {
        return arr[top];  // Return the top element
        }
}

// isEmpty: Returns true if the stack is empty
bool isEmpty()
{
    return (top < 0);
}

// isFull: Returns true if the stack is full
bool isFull()
{
    return (top >= MAX - 1);
}

// size: Returns the current number of elements in the stack
int size() {
    return top + 1;  // top is -1 when empty, so size is top + 1
}

// printStack: Prints all elements in the stack from top to bottom
void printStack()
{
    if (isEmpty())
        {
        cout << "Stack is empty\n";
        }
    else
        {
        cout << "Stack elements:\n";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << endl;
        }
        }
}
};

// Main function to allow the user to perform stack operations in a loop
int main() {
    Stack s;
    int choice, value;

    do {
        // Print the menu options for stack operations
        cout << "\nChoose a stack operation:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Top Element\n";
        cout << "4. Print Stack\n";
        cout << "5. Check if Empty\n";
        cout << "6. Get Size\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: // Push
                cout << "Enter a value to push: ";
                cin >> value;
                s.push(value);
                break;

            case 2: // Pop
                value = s.pop();
                if (value != -1)
                    cout << value << " popped from stack\n";
                break;

            case 3: // Peek
                value = s.top_element();
                if (value != -1)
                    cout << "Top element is " << value << endl;
                break;

            case 4: // Print Stack
                s.printStack();
                break;

            case 5: // Check if Empty
                if (s.isEmpty())
                    cout << "Stack is empty\n";
                else
                    cout << "Stack is not empty\n";
                break;

            case 6: // Get Size
                cout << "Size of the stack: " << s.size() << endl;
                break;

            case 7: // Exit
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 7);  // Exit the loop when choice is 7

    return 0;
}