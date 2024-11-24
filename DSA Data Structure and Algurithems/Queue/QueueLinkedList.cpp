#include<iostream>
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
// It is working in Heap memory, it will never become full

// Push
    void Push(int value){
        Node* Temp = new Node(value);
        if(IsEmpty()){
            Front = Temp;
            Back = Front;
            cout<<value<<" Pushed\n";
        } else{
            cout<<value<<" Pushed\n";
            Back ->next = Temp;
            Back = Temp;
        }
    }
// pop
    void pop(){
        if(IsEmpty()){
            cout<<"Queue Under Flow\n";
        } else{
            Node* Temp = Front;
            Front = Front->next;
            cout<<Temp ->data<<" Poped\n";
            delete Temp;
        }
    }
// Front
    int FrontElement(){
        if(IsEmpty()){
            cout<<"Queue Under flow\n";
        } else{
            return Front ->data;
        }
    }
// Back
    int BackElement(){
        if(IsEmpty()){
            cout<<"Under Flow\n";
        } else{
            return Back ->data;
        }
    }
// Display
    void Display(){
        if(IsEmpty()){
            cout<<"Queue is Under flow\n";
            return;
        }else{
            Node* Temp = Front;
            while(Temp != nullptr){
                cout<<Temp ->data<<" -> ";
                Temp = Temp ->next;
            }
            cout<< endl;
        }
    }
};

int main(){
    Queue Q;
    Q.Push(5);
    Q.Push(10);
    Q.Push(15);
    Q.Push(44);
    Q.pop();
    Q.Display();
    cout<<"Front Element: "<<Q.FrontElement() << endl;
    cout<<"Back Element: "<<Q.BackElement();

return 0;
}