#include<iostream>
using namespace std;
#define MAX_SIZE 5
int a[MAX_SIZE];
int front = -1;
int rear = -1;
void enqueue()
{
    int x;
    if ((rear + 1) % MAX_SIZE == front)
    {
        cout<<"Queue is full !!!!!\n"<<endl;
        return;
    }
    cout <<"\n Enter the element"<<endl;
        cin >>x;
    if (front == -1 && rear == -1)
    {
      front = rear = 0;
             
    }
    else
    rear = (rear + 1) % MAX_SIZE;
    a[rear] = x;
    
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        cout<<"Queue is empty !!!!! \n"<<endl;
        return;
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
else
    front = (front + 1) % MAX_SIZE;
}
int Peek()
{
    if (a[front] == -1)
    return -1;
    return a[front];
}

void Print()
{
    int count = ((rear + MAX_SIZE - front) % MAX_SIZE)+1;
    int i;
    cout <<"\n Elements on the Queue are:\n";
    for (i = 0; i < count; i++)
    {
        cout <<"\t" <<a[(front+i)%MAX_SIZE];
    }
    cout <<"\n";
}
int main()
{
int ch, val;
   cout<<"1)Enqueue\n";
   cout<<"2)Dequeue\n";
   cout<<"3)Display\n";
   cout<<"4)Peek\n";
   cout<<"5)Exit\n";
   do {
      cout<<"Enter choice : "<<endl;
      cin>>ch;
      switch(ch) {
         case 1:
         enqueue();
         Print();   
         break;

         case 2:
         dequeue();
         Print();
         break;

         case 3:
         Print();
         break;
        
         case 4:
         int x;
         x=Peek();
         cout<<"\n Peek element is= "<<x <<endl;
         
         break;
         
         case 5:
         cout<<"Exit\n";
         break;
         default: cout<<"Incorrect Choice!\n";
      }
   } while(ch != 5);
   return 0;

}