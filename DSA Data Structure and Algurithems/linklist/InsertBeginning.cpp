#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    // Constructor to initialize node
    Node(int value) {
        data = value;
        next = NULL;
    }
};

// Function to insert a new node at the start of the list
void insertAtStart(Node* &head, int value) {
    Node* newNode = new Node(value);  // Create a new node
    newNode->next = head;             // Point newNode's next to the current head
    head = newNode;                   // Update head to newNode
}

// Function to display all nodes in the list
void displayList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << "Data: " << temp->data << ", Next: " << temp->next << endl;
        temp = temp->next;
    }
}

int main() {
    Node* head = NULL;  // Initialize head to NULL

    int arr[] = {10, 20, 30, 40, 50};
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        insertAtStart(head, arr[i]);  // Insert each element at the start
    }

    displayList(head);  // Display the entire linked list
    return 0;
}
