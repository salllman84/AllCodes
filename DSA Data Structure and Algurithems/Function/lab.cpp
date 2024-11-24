#include <iostream>
using namespace std;

// Node structure for the linked list
struct Node {
    int data;
    Node* next;
};

// Linked list class
class LinkedList {
private:
    Node* head;

public:
    // Constructor
    LinkedList() {
        head = nullptr;
    }

    // Function to insert a new node at the end
    void insert(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;                                                                                               if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cout << "Inserted: " << value << endl;
    }

    // Function to delete a node with a specific value
    void deleteNode(int value) {
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }

        // If the node to be deleted is the head
        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            cout << "Deleted: " << value << endl;
            return;                                                                                                                           }

        Node* temp = head;
        Node* prev = nullptr;

        while (temp != nullptr && temp->data != value) {
            prev = temp;
            temp = temp->next;
        }

        // If the value was not found
        if (temp == nullptr) {
            cout << "Value not found!" << endl;
            return;
        }

        prev->next = temp->next;
        delete temp;
        cout << "Deleted: " << value << endl;
    }

    // Function to display the linked list
    void display() {
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;                                                                                                                                                                   }

        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // Destructor to free memory
    ~LinkedList() {
        Node* current = head;
        Node* next = nullptr;
        while (current != nullptr) {
            next = current->next;
            delete current;
            current = next;
        }
        head = nullptr;
    }
};                                                                                                                                              // Main function to demonstrate linked list operations
int main() {
    LinkedList list;

    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    list.insert(50);
    list.insert(60);
    list.insert(70);

    cout << "Current List: ";
    list.display();
    list.insert(200);
    //list.deleteNode(20);
    cout << "After Deletion: ";
    list.display();

    list.deleteNode(50);  // Trying to delete a value not in the list
    cout << "After Deletion: ";
    list.display();

return 0;
}

