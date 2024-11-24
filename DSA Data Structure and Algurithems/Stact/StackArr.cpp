#include <iostream>
using namespace std;

class Stack {
    int* Arr;
    int Top;
    int size;

public:
    Stack(int s) {
        Arr = new int[s];
        Top = -1;
        size = s;
    }

    // 1. Is Empty
    bool IsEmpty() {
        return Top == -1;  // Simplified to return a boolean without messages
    }

    // 2. Is Full
    bool IsFull() {
        return Top == size - 1;  // Simplified to return a boolean without messages
    }

    // 3. Push
    void Push(int val) {
        if (IsFull()) {
            cout << "Stack Overflow\n";
        } else {
            Top++;
            Arr[Top] = val;
            cout << val << " has been pushed onto the stack\n";
        }
    }

    // 4. Pop
    void Pop() {
        if (IsEmpty()) {
            cout << "Can't pop, Stack is Empty\n";
        } else {
            cout << Arr[Top] << " has been popped\n";
            Top--;
        }
    }

    // 5. Stack Top
    int Stacktop() {
        if (IsEmpty()) {
            cout << "Stack is Empty\n";
            return -1;  // Return error value for empty stack
        } else {
            cout << "Top Value is: " << Arr[Top] << "\n";
            return Arr[Top];
        }
    }

    // 6. Stack Size
    int StackSize() {
        int currentSize = Top + 1;
        cout << "Current Stack Size is: " << currentSize << "\n";
        return currentSize;
    }

    // 7. Display
    void Display() {
        if (IsEmpty()) {
            cout << "Stack is empty.\n";
            return;
        }
        cout << "Stack Elements are:\n";
        for (int i = Top; i >= 0; i--) {
            cout << Arr[i] << "\n";
        }
    }
};

int main() {
    int size, choice, value;
    cout << "Enter Size of Stack: ";
    cin >> size;
    Stack S(size);

    do {
        cout << "\nMenu:\n";
        cout << "1: Check if Stack is Empty\n";
        cout << "2: Check if Stack is Full\n";
        cout << "3: Push a Value\n";
        cout << "4: Pop a Value\n";
        cout << "5: Show Top Value\n";
        cout << "6: Show Stack Size\n";
        cout << "7: Display Stack\n";
        cout << "0: Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << (S.IsEmpty() ? "Stack is Empty\n" : "Stack is not Empty\n");
                break;
            case 2:
                cout << (S.IsFull() ? "Stack is Full\n" : "Stack is not Full\n");
                break;
            case 3:
                cout << "\nEnter a Value to Push: ";
                cin >> value;
                S.Push(value);
                break;
            case 4:
                S.Pop();
                break;
            case 5:
                S.Stacktop();
                break;
            case 6:
                S.StackSize();
                break;
            case 7:
                S.Display();
                break;
            case 0:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Enter a Valid Option\n";
                break;
        }
    } while (choice != 0);

    return 0;
}
