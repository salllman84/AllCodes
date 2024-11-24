#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    // 1. Insert at the beginning
    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {  // List does not exist
            head = newNode;
        } else {  // List exists
            newNode->next = head;
            head = newNode;
        }
    }

    // 2. Insert at the end
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {  // List does not exist
            head = newNode;
        } else {  // List exists
            Node* temp = head;
            while (temp->next != nullptr) { // Traverse to the last node
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // 3. Insert in the middle at a given position
    void insertAtMiddle(int position, int value) {
        if (position < 1) { // Invalid position check
            cout << "Position should be 1 or greater." << endl;
            return;
        }
        Node* newNode = new Node(value);

        if (position == 1) {  // Position is at the beginning
            insertAtBeginning(value);
        } else {  // Position is beyond the beginning
            Node* temp = head;
            for (int i = 1 ; i < position - 1 && temp != nullptr; ++i) {
                temp = temp->next;
            }
            if (temp == nullptr) {  // Position exceeds list length
                cout << "Position exceeds list length." << endl;
                delete newNode;
                return;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }

    // Function to display the linked list
    void display() {
        if (head == nullptr) {
            cout << "List is empty." << endl;
            return;
        }
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }
};

int main() {
    LinkedList list;
    int choice, value, position;

    do {
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Insert at Middle\n";
        cout << "4. Display List\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert at beginning: ";
                cin >> value;
                list.insertAtBeginning(value);
                break;

            case 2:
                cout << "Enter value to insert at end: ";
                cin >> value;
                list.insertAtEnd(value);
                break;

            case 3:
                cout << "Enter position to insert at: ";
                cin >> position;
                cout << "Enter value to insert at position " << position << ": ";
                cin >> value;
                list.insertAtMiddle(position, value);
                break;

            case 4:
                cout << "Linked List: ";
                list.display();
                break;

            case 5:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
/*
void DeleteMid(int possition){
    Node* Temp = head;
    if(isEmpty()){
        cout<<"Under Flow";
        return;
    }else if(possition < 1){
        cout<<"Possition not found\n";
        return;
    }
    else if(possition == 1){
        head = head->next;
        delete Temp;
        return;
    } else {
        Node* Prev = nullptr;
        for(int i=1; i < possition && Temp != nullptr; i++){
            Prev = Temp;
            Temp = Temp->next;
        }
        if(Temp == nullptr){
            cout<<"List length exceed\n";
            return;
        }
        Prev->next = Temp ->next;
        delete Temp;
    }
} */

/*
void insertmid(int value, int possition){
Node* Current = new Node(value);
if(isEmpty()){
head = Current;
} else if(possition < 1){
cout<<"Possition not found";
} else{
Node* Temp = head;
Node* Prev = nullptr;
for(int i=1; i < possition && Temp != nullptr; i++){
prev = Temp;
Temp = Temp ->next;
}
Current ->next = prev ->next // or Temp;
Prev ->next = current;
}
}
*/