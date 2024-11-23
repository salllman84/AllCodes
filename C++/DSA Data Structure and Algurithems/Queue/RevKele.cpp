#include<iostream>
#include<stack>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class Queue{
    Node* Front;
    Node* Back;
    public:
    Queue() : Front(nullptr), Back(nullptr) {}

    // is empty
    bool IsEmpty(){
        return Front == nullptr;
    }

    // Push
    void Push(int value){
        if(IsEmpty()){
            Front = new Node(value);
            Back = Front;
        } else{
            Node* Temp = new Node(value);
            Back ->next = Temp;
            Back = Temp;
        }
    }

    // Pop
    void pop(){
        if(IsEmpty()){
            cout<<"Queue Under Flow\n";
        } else{
            Node* Temp = Front;
            Front = Front->next;
            delete Temp;
        }
    }

    // Front Element
    int FrontElement(){
        if(IsEmpty()){
            cout<<"Queue Under flow\n";
            return -1;
        } else{
            return Front ->data;
        }
    }

    // Back Element
    int BackElement(){
        if(IsEmpty()){
            cout<<"Under Flow\n";
            return -1;
        } else{
            return Back ->data;
        }
    }

    // Display
    void Display(){
        if(IsEmpty()){
            cout << "Queue is Under flow\n";
            return;
        } else {
            Node* Temp = Front;
            while(Temp != nullptr){
                cout << Temp->data << " -> ";
                Temp = Temp->next;
            }
            cout << "NULL" << endl;
        }
    }

    // Reverse first K elements
    void ReverseFirstK(int K) {
        if (K <= 0 || IsEmpty()) {
            cout << "Invalid operation\n";
            return;
        }

        stack<int> stk;
        // Step 1: Dequeue first K elements and push them onto a stack
        for (int i = 0; i < K; ++i) {
            if (IsEmpty()) return; // Edge case if K > queue size
            stk.push(FrontElement());
            pop();
        }

        // Step 2: Enqueue back elements from the stack (reversed)
        while (!stk.empty()) {
            Push(stk.top());
            stk.pop();
        }

        // Step 3: Rotate remaining elements to the back
        int remaining = 0;
        Node* temp = Front;
        while(temp != nullptr) {
            remaining++;
            temp = temp->next;
        }
        for (int i = 0; i < remaining - K; ++i) {
            int frontElement = FrontElement();
            pop();
            Push(frontElement);
        }
    }
};

int main() {
    Queue Q;
    Q.Push(10);
    Q.Push(20);
    Q.Push(30);
    Q.Push(40);
    Q.Push(50);

    cout << "Original Queue: ";
    Q.Display();

    int K = 3;
    Q.ReverseFirstK(K);

    cout << "Queue after reversing first " << K << " elements: ";
    Q.Display();

    return 0;
}
