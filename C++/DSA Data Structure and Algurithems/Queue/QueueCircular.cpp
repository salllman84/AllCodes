#include<iostream>
using namespace std;
/*
Update only, where Front or Back increments with[Back = (Back+1)%size]
                                                [Fron = (Front+1)%size]
*/

class Queue
{
    int* Arr;
    int Front;
    int Back;
    int size;

    public:
    Queue(int s) : Arr (new int[s]), Front(-1), Back(-1), size(s) {};

//1. If Empty
    bool IsEmpty()
    {
        return Front == -1;
    }
//2. If Full
    bool IsFull()
    {
        return (Back+1)%size == Front; // back = size-1; CHANGED
    }
//3. Push values
    void Push(int value)
    {
        if(IsEmpty())
        {
            Front = 0, Back = 0;
            Arr[Back] = value;
        } else if(IsFull())
        {
            cout<<"Queue OverFlow\n";
        } else
        {
            Back = (Back+1)%size;//Back++;//CHANGED
            Arr[Back] = value;
        }
    }
//4. Pop value
    void Pop()
    {
        if(IsEmpty())
        {
            cout<<"Queue UnderFlow\n";
        } else if(Front == Back)
        {
            Front = -1;
            Back = -1;
        } else
        {
            Front = (Front + 1) % size;//Front = Front + 1; CHANGED
        }
    }
//5. Front Value
    bool FrontValue()
    {
        if(IsEmpty())
        {
            cout<<"Queue UnderFlow\n";
        } else{
            return Arr[Front];
        }
    }
//6. Back Value
    bool BackValue()
    {
        if(IsEmpty())
        {
            cout<<"Queue UnderFlow\n";
        } else
        {
            return Arr[Back];
        }
    }
//7. Display Queue
    void Display() {
    if (IsEmpty()) {
        cout << "Queue is Empty\n";
    } else {
        int i = Front;
        do {
            cout << Arr[i] << " ";
            i = (i + 1) % size;  // Move to the next index, wrapping around if necessary
        } while (i != (Back + 1) % size);  // Stop when we've displayed up to Back
        cout << endl;
    }
}

};

int main()
{
    int queueSize;
    cout << "Enter the size of the Queue: ";
    cin >> queueSize;
Queue Q(queueSize);
int Choice, value;
do
{
    cout<<"Press 1 to check Queue is Empty\n";
    cout<<"Press 2 to check Queue is Full\n";
    cout<<"Press 3 to check Queue First Value\n";
    cout<<"Press 4 to check Queue last value\n";
    cout<<"Press 5 to Enter value into Queue\n";
    cout<<"Press 6 to Delete First Value of Queue\n";
    cout<<"Press 7 to Display Queue\n";
    cout<<"Press 8 to Exit\n";
    cout<<"\nEnter your choice from 1 - 8: ";
    cin>>Choice;

    switch (Choice)
    {
    case 1:
        if(Q.IsEmpty())
        {
            cout<<"Queue is Empty\n";
        }
        break;
    case 2:
        if(Q.IsFull())
        {
            cout<<"Queue Over flow\n";
        } else if(Q.IsEmpty())
        {
            cout<<"Queue is Empty\n";
        } else
        {
            cout<<"Nor Full Nor Empty\n";
        }
        break;
    case 3:
        Q.FrontValue(); 
        break;
    case 4:
        Q.BackValue();
        break;
    case 5:
        cout<<"Enter a Value into Queue: ";
        cin>>value;
        Q.Push(value);
        break;
    case 6:
        Q.Pop();
        cout<<"Queue, After Deleting"<< Q.FrontValue()<<": ";
        Q.Display();
        break;
    case 7:
        cout<<"Queue Elements are below.\n";
        Q.Display();
        break;
    case 8:
        cout<<"Exiting ......";
        break;
    default:
        cout<<"Enter a Valid Input!\n";
        break;
    }
} while (Choice != 8);

    return 0;
}