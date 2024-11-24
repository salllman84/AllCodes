#include <iostream>
using namespace std;

class Node {
public:
    int value;          // Data stored in the node
    Node* next;         // Pointer to the next node

    Node(int data) {
        value = data;
        next = NULL;    // Initialize next to NULL
    }
};

// Function to add a node at the end of the linked list
void insertAtTail(Node* &head, int data) {
    Node* newNode = new Node(data); // Create a new node with given data

    if (head == NULL) {
        head = newNode; // If list is empty, newNode becomes the head
        return;
    }

    Node* current = head;
    while (current->next != NULL) { // Traverse to the last node
        current = current->next;
    }
    current->next = newNode; // Link the last node to the new node
}

// Function to display the linked list
void displayList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        cout << current->value << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl; // End of list
}

int main() {
    Node* head = NULL; // Start with an empty list

    // Inserting nodes at the tail of the list
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);

    displayList(head); // Display the list
    return 0;
}
