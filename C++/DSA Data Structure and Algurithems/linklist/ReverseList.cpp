#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int value) : data(value) ,next(nullptr) {};
};

class linkedList{
    Node* head;
    public:
    linkedList() : head(nullptr) {};

    public:

    bool isEmpty(){
        return head == nullptr;
    }
//1. insert at beginnig
    void insertBegin(int value){
        Node* temp = new Node(value);
        if(isEmpty()){
            head = temp;
        } else{
            temp ->next = head;
            head = temp;
        }
    }
//2. insert end
    void insertEnd(int value){
        Node* temp = new Node(value);
        if(isEmpty()){
            cout<<temp->data<<" pushed\n";
            head = temp;
        } else{
            Node* tail = head;
            while(tail ->next != nullptr){
                tail = tail->next;
            }
            cout<<temp->data<<" pushed\n";
            tail ->next = temp;
        }
    }
//3. insert at middle
    void insertMiddle(int position, int value){
        Node* curr = new Node(value);
        if(isEmpty()){
            insertBegin(value);
        } else if(head ->next == nullptr){
            insertEnd(value);
        } else{
            Node* Temp = head;
            Node* previous = nullptr;
            for(int i=0; i<position && Temp != nullptr; i++){
                previous = Temp;
                Temp = Temp ->next;
            }
            curr ->next = Temp;
            previous ->next = curr;
        }
    }
//4. Delete Start
    void deleteStart(){
        if(isEmpty()){
        } if(head->next = nullptr){
            Node* Temp = head;
            head = nullptr;
            delete Temp;
            } else{
            Node* Temp = head;
            head = head ->next;
            delete Temp;
        }
    }
//5. Delete End
    void DeleteEnd(){
        Node* Curr, *Previous;
        Curr = head;
        Previous = nullptr;
        if(isEmpty()){
        } else if(head -> next == nullptr){
            delete Curr;
            head = nullptr;
        } else{
            while(Curr ->next != nullptr){
                Previous = Curr;
                Curr = Curr ->next;
            }
            Previous ->next = nullptr;
            delete Curr;
        }
    }
//6. Delete Spacific Position
    void DeleteMid(int position){
        Node* Previous = nullptr;
        Node* Curr = head;
        Node* Future =  head ->next;
        if(position == 0 && Future != nullptr){
            head = Future;
            Future = Future ->next;
        // if List is Empty
        }else if(head == nullptr){
            cout<<"List is Empty\n";
        // if list is only one value
        } else if(head->next == nullptr){
            delete Future;
            head = nullptr;
        // if deleting middle value
        } else{
            for(int i=0; i <= position && Curr != nullptr; i++){
                Previous = Curr;
                Curr = Future;
                Future = Future ->next;
                if(Curr ->next == nullptr && Future == nullptr){
                delete Future;
                delete Curr;
            }
            }
            if(Previous ->next == nullptr){
                cout<<"Limit Exceed of the List Lenth\n";
            }
            Previous ->next = Future;
            delete Curr;
        }
        }
//7. display
    void Display(){
        Node* Temp = head;
        if(isEmpty()){
            cout<<"list is empty\n";
        } else{
            while(Temp != nullptr){
                cout<<Temp ->data <<" -> ";
                Temp = Temp ->next;
            }
            cout<<"nullptr\n";
        }
    }
};

int main(){
    linkedList list;
    int choice, position, value;

    do
    {
        cout<<"\npress 1 to insert at begin\n";
        cout<<"press 2 to insert at end\n";
        cout<<"press 3 to insert at middle\n";
        cout<<"press 4 to delete starting value\n";
        cout<<"press 5 to delete ending value\n";
        cout<<"Press 6 to delete spacific possition\n";
        cout<<"press 7 to display the list\n";
        cout<<"press 8 to exit\n";
        cout<<"\nEnter your choice : "; cin>>choice;

        switch (choice)
        {
        case 1:
            cout<<"\ninsert a value at begin: ";
            cin>>value;
            list.insertBegin(value);
            break;
        case 2:
            cout<<"\ninsert a value at end: ";
            cin>>value;
            list.insertEnd(value);
            break;
        case 3:
            cout<<"\nEnter the possition you want to insert value: ";
            cin>>position;
            cout<<"\ninsert a value at position "<<position<<": ";
            cin>>value;
            list.insertMiddle(position, value);
            break;
        case 4:
            if(list.isEmpty()){
                break;
            }
            list.deleteStart();
            cout<<"After deleting first element: ";
            list.Display();
            break;
        case 5:
            if(list.isEmpty()){
                break;
            }
            list.DeleteEnd();
            cout<<"after deleting end value: ";
            list.Display();
            break;
        case 6:
            if(list.isEmpty()){
                break;
            }
            cout<<"Enter Position to delete: ";
            cin>>position;
            list.DeleteMid(position);
            cout<<"after deleting "<<position<<" position value: ";
            list.Display();
            break;
        case 7:
            cout<<"\nList values are below.\n";
            list.Display();
            break;
        
        case 8:
            cout<<"Exiting\n";
            break;
        default:
            cout<<"\nEnter a valid input\n";
            break;
        }

    } while (choice != 8);

    return 0;
}