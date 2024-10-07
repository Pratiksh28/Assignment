#include <iostream> 
#include <stack>
using namespace std;
int main() {
	stack<int> stack;
    int n,i,ch,ele;
        
        
        do{
        cout<< "1. Push"<<endl<< "2. Pop"<<endl <<"3. Exit"<<endl;
        cin>>ch;
        switch (ch)
        {
        case 1: cout<< "Enter the element to push"<<endl;
                cin >>ele;
                stack.push(ele);
                break;
        case 2:  if (!stack.empty()) {
        cout << "Popped Element=" <<stack.top() <<" ";
        stack.pop();
    }
        cout << "stack is empty"<<endl;
                break;
    
        case 3: exit(0);
                break;
        default: cout<< "Select correct option"<<endl;
            break;
        }

        }while (ch<4);
        
        
    }
	

	