// C++ program to implement a stack using singly linked list
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

// Class representing a node in the linked list
class Node {
public:
    int data;
    Node* next;
    Node(int new_data) {
        this->data = new_data;
        this->next = nullptr;
    }
};

// Class to implement stack using a singly linked list
class Stack {

    // head of the linked list
    Node* head;

public:
    // Constructor to initialize the stack
    Stack() { this->head = nullptr; }

    // Function to check if the stack is empty
    bool isEmpty() {
      
        // If head is nullptr, the stack is empty
        return head == nullptr;
    }

    // Function to push an element onto the stack
    void push(int new_data) {
      
        // Create a new node with given data
        Node* new_node = new Node(new_data);

        // Check if memory allocation for the new node
        // failed
        if (!new_node) {
            cout << "\nStack Overflow";
        }

        // Link the new node to the current top node
        new_node->next = head;

        // Update the top to the new node
        head = new_node;
    }

    // Function to remove the top element from the stack
    void pop() {

        // Check for stack underflow
        if (this->isEmpty()) {
            cout << "\nStack Underflow" << endl;
        }
        else {
            // Assign the current top to a temporary
            // variable
            Node* temp = head;

            // Update the top to the next node
            head = head->next;
            cout<<"Removed element is="<<temp->data<<endl;
            // Deallocate the memory of the old top node
            delete temp;
        }
    }

    // Function to return the top element of the stack
    int peek() {

        // If stack is not empty, return the top element
        if (!isEmpty())
            return head->data;
        
    }
void display()

{
	Node* temp = head;
	if (this->isEmpty())
    {
        cout<<"Stack is Empty!!!!!"<<endl;
        return;
    }
cout<<"Stack elements are....."<<endl;
while (temp!= NULL)
    {
       cout<<temp->data<<"\n";
        temp= temp->next;
    }
}

};

// Driver program to test the stack implementation
int main() {
    // Creating a stack
    Stack st;
   
int ele,ch;
do{
    cout<< "\n1.Push"<<endl<<"2. Pop"<<endl<<"3.Peek"<< endl<<
    "4.Display"<<endl<<"5.exit"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1:
            cout<<"\n Enter the data to push on the stack"<<endl;
              cin >>ele;
            st.push(ele);
            break;
        case 2:
            cout << "Removing element..." << endl;
                st.pop();
                break;
        case 3:
		if(st.isEmpty())
		cout<<"Stack is Empty"<<endl;
		else{
             int ele=st.peek();
             cout<< "Deleted element is="<<ele;}
             break;
        case 4: st.display();
                break;
        case 5: exit(0);

        default : cout<< "Wrong Choice!!!!";
    }
    
    
}while(ch!=5);
    

   return 0;
}
