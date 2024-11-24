#include<iostream>
using namespace std;

class Node{
    public:
    int Data;
    Node* next;

    Node(int val){
        Data = val;
        next = nullptr;
    }
};

class LinkedList{
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
        }
        else{
            newNode ->next = head;
            head = newNode;
        }
    }

    // 2. Insert at the End
    void InsertAtEnd(int value){
        Node* newNode = new Node(value);
        if(head == nullptr){
            head = newNode;
        } else{
            Node* Tail = head;
            while(Tail->next != nullptr){
                Tail = Tail ->next;
            }
            Tail ->next = newNode;
        }
    }

    // 3. At the Middle
    void AtTheMiddle(int Possition, int value){
        if(Possition < 1){
            cout<<"possition must be 1 or greater\n";
            return;
        }
        Node* Middle = new Node(value);
        if(Possition == 1){
            insertAtBeginning(value);
        } else {
            Node* Temp = head;
            for(int i=1; i < Possition - 1 && Temp != nullptr; ++i){
                Temp = Temp ->next;
            }
            if(Temp == nullptr){
                cout<<"possition limit exceed\n";
                delete Middle;
                return;
            }
            Middle->next = Temp->next;
            Temp->next = Middle;
        }
    }
    // Display Function
    void DisplayDetail(){
        if(head == nullptr){
            cout<<"List is Empty\n";
            return;
        }
        Node* Temp = head;

        while(Temp != nullptr){
            cout<<Temp ->Data<<"->";
            Temp = Temp->next;
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
                list.InsertAtEnd(value);
                break;

            case 3:
                cout << "Enter position to insert at: ";
                cin >> position;
                cout << "Enter value to insert at position " << position << ": ";
                cin >> value;
                list.AtTheMiddle(position, value);
                break;

            case 4:
                cout << "Linked List: ";
                list.DisplayDetail();
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
