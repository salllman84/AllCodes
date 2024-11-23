#include<iostream>
using namespace std;

class Node {
    public:
    int Data;
    Node* next;

    Node(int value) : Data(value), next(nullptr) {}
};

class LinkedList {
    private:
    Node* head;

    public:
    LinkedList() : head(nullptr) {}

    // Check if the list is empty
    bool isempty() {
        return head == nullptr;
    }

    // 1. Insert before head
    void insertStart(int value) {
        Node* Start = new Node(value);
        if (head == nullptr) {
            head = Start;
        } else {
            Start->next = head;
            head = Start;
        }
    }

    // 2. Insert at the end
    void insertEnd(int value) {
        Node* End = new Node(value);
        if (head == nullptr) {
            head = End;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = End;
        }
    }

    // 3. Insert in the middle at a given position
    void insertMid(int position, int value) {
        if (position < 1) {
            cout << "Invalid position. Please enter a position greater than 0.\n";
            return;
        }

        if (position == 1) { // Special case: insert at the start
            insertStart(value);
            return;
        }

        Node* mid = new Node(value);
        Node* temp = head;

        for (int i = 1; i < position - 1 && temp != nullptr; i++) {
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << "Position exceeds the list length.\n";
            delete mid; // Clean up allocated node if position is invalid
            return;
        }

        mid->next = temp->next;
        temp->next = mid;
    }

    // 4. Display the list
    void display() {
        if (head == nullptr) {
            cout << "List doesn't exist\n";
            return;
        }

        Node* S_To_End = head;
        while (S_To_End != nullptr) {
            cout << S_To_End->Data << " -> ";
            S_To_End = S_To_End->next;
        }
        cout << "NULL\n";
    }

    // 5. Delete from start
    void DeleteStart() {
        if (isempty()) {
            cout << "List is empty.\n";
            return;
        }
        
        Node* temp = head;
        head = head->next;
        delete temp;
        cout << "First element deleted.\n";
    }

    // 6. Delete from end
    void DeleteEnd() {
        if (isempty()) {
            cout << "List is empty.\n";
            return;
        }

        if (head->next == nullptr) { // Special case: only one element
            delete head;
            head = nullptr;
            cout << "Last element deleted, list is now empty.\n";
            return;
        }

        Node* temp = head;
        Node* prev = nullptr;
        while (temp->next != nullptr) {
            prev = temp;
            temp = temp->next;
        }

        delete temp;
        prev->next = nullptr;
        cout << "Last element deleted.\n";
    }

    // 7. Delete from a specific position
    void DeleteMiddle(int position) {
        if (isempty()) {
            cout << "List is empty.\n";
            return;
        }

        if (position == 1) { // Special case: delete the start
            DeleteStart();
            return;
        }

        Node* temp = head;
        Node* prev = nullptr;

        for (int i = 1; i < position && temp != nullptr; i++) {
            prev = temp;
            temp = temp->next;
        }

        if (temp == nullptr) {
            cout << "Position exceeds the list length.\n";
            return;
        }

        prev->next = temp->next;
        delete temp;
        cout << "Element at position " << position << " deleted.\n";
    }
};

int main() {
    LinkedList list;
    int choice, position, value;

    do {
        cout << "\nEnter your choice\n";
        cout << "1. Insert Start\n";
        cout << "2. Insert End\n";
        cout << "3. Insert Middle\n";
        cout << "4. Display List\n";
        cout << "5. Delete Start\n";
        cout << "6. Delete End\n";
        cout << "7. Delete Middle\n";
        cout << "8. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter a value to insert at the beginning: ";
                cin >> value;
                list.insertStart(value);
                break;

            case 2:
                cout << "Enter a value to insert at the end: ";
                cin >> value;
                list.insertEnd(value);
                break;

            case 3:
                cout << "Enter position to insert at: ";
                cin >> position;
                cout << "Enter value to insert at position " << position << ": ";
                cin >> value;
                list.insertMid(position, value);
                break;

            case 4:
                cout << "\nLinked List:\n";
                list.display();
                break;

            case 5:
                list.DeleteStart();
                cout << "\nCurrent list:\n";
                list.display();
                break;

            case 6:
                list.DeleteEnd();
                cout << "\nCurrent list:\n";
                list.display();
                break;

            case 7:
                cout << "Enter position to delete: ";
                cin >> position;
                list.DeleteMiddle(position);
                cout << "\nCurrent list:\n";
                list.display();
                break;

            case 8:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Enter a valid choice.\n";
                break;
        }
    } while (choice != 8);

    return 0;
}