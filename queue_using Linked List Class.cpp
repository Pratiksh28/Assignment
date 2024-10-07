#include <iostream>
using namespace std;

// Define Node structure
struct Node {
    // The data held by the node
    int data;
    // Pointer to the next node in the list
    Node* next;
};

// Define Queue class
class Queue {
    // Pointer to the front node of the queue
    Node* front;
    // Pointer to the rear node of the queue
    Node* rear;

public:
    // Constructor initializes an empty queue
    Queue()
        : front(nullptr)
        , rear(nullptr)
    {
    }

    // Enqueue adds an element at the end of the queue
    void enqueue(int x)
    {
        // Create a new node with given data
        Node* newNode = new Node{ x, nullptr };
        // If the queue is empty
        if (rear == nullptr) {

            // Both front and rear point to the new node
            front = rear = newNode;
        }
        else {
            // Link the new node at the end of the queue
            rear->next = newNode;
            // Update rear to the new node
            rear = newNode;
        }
    }

    // Dequeue removes the element at the front of the queue
    void dequeue()
    {
        // If the queue is empty, do nothing
        if (front == nullptr)
        {   cout<<"Queue is Empty!!!"<<endl;
            return;
        }
        // Temporary pointer to the front node
        Node* temp = front;
        cout<<"Deleted element"<<front->data;
        // Move front to the next node
        front = front->next;
        // If the queue is now empty
        if (front == nullptr)
       {     // Set rear to nullptr
            rear = nullptr;
            
        // Delete the old front node
       }
        delete temp;
    }

    // Peek returns the front element of the queue
    int peek()
    {
        if (isEmpty())
        {
                   cout<<"Queue is Empty!!!!!"<<endl;
                  
        }
        else
        {
         return front->data;
        }
       
    }

    // isEmpty checks if the queue is empty
    bool isEmpty()
    {
        // Return true if front is nullptr
        return front == nullptr;
    }

    void display()
    {
        Node* temp = front;
	if (this->isEmpty())
    {
        cout<<"Queue is Empty!!!!!"<<endl;
        return;
    }
cout<<"Queue elements are....."<<endl;
while (temp!= NULL)
    {
       cout<<temp->data<<"\t";
        temp= temp->next;
    }
}
    
};

// Main function
int main()
{
    // Create a queue
    Queue q;
    int ele,ch;
do{
    cout<< "\n1.Enqueue"<<endl<<"2.Dequeue"<<endl<<"3.Peek"<< endl<<
    "4.Display"<<endl<<"5.exit"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1:
            cout<<"\n Enter the data to enqueue on the queue"<<endl;
              cin >>ele;
            q.enqueue(ele);
            break;
        case 2:
            
                q.dequeue();
                break;
        case 3: int ele;
                ele=q.peek();
                break;
        case 4: q.display();
                break;
        case 5: exit(0);

        default : cout<< "Wrong Choice!!!!";
    }
    
    
}while(ch!=5);
    
    return 0;
}
