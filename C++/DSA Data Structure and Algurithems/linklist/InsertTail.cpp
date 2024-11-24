#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = NULL;
    }

    //Node(int value) : data(value), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;

public:

    LinkedList(){
        head = NULL;
    }

    //LinkedList() : head(nullptr) {}

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
            for (int i = 1; i < position - 1 && temp != nullptr; ++i) {
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

    // Test cases
    list.insertAtBeginning(10); // List: 10 -> nullptr
    list.display();

    list.insertAtEnd(20);       // List: 10 -> 20 -> nullptr
    list.display();

    list.insertAtMiddle(2, 15); // List: 10 -> 15 -> 20 -> nullptr
    list.display();

    list.insertAtMiddle(1, 5);  // List: 5 -> 10 -> 15 -> 20 -> nullptr
    list.display();

    list.insertAtEnd(25);       // List: 5 -> 10 -> 15 -> 20 -> 25 -> nullptr
    list.display();

    list.insertAtMiddle(3, 12); // List: 5 -> 10 -> 12 -> 15 -> 20 -> 25 -> nullptr
    list.display();

    return 0;
}
