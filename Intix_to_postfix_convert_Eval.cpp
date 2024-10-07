// C++ Program to illustrate how to use a stack to convert
// an infix expression to a postfix expression
#include <iostream>
#include <stack>
#include <string>
using namespace std;
 string postfix = "";
// Function to check the precedence of operators
int precedence(char op)
{
    if(op == '(' )
        return 0;
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/'  || op == '^')
        return 2;
    return 3;
}

// Function to convert infix expression to postfix
// expression
string infixToPostfix(string infix)
{
    stack<char> st;
   
    for (int i = 0; i < infix.length(); i++) {
        char c = infix[i];

        // If the scanned character is an operand, add it to
        // output string.
        if (isalnum(c))
            postfix += c;

        // If the scanned character is an '(', push it to
        // the stack.
        else if (c == '(')
            st.push('(');

        // If the scanned character is an ')', pop and to
        // output string from the stack until an '(' is
        // encountered.
        else if (c == ')') {
            while (st.top() != '(') {
                postfix += st.top();
                st.pop();
            }
            st.pop();
        }

        // If an operator is scanned
        else {
            while (!st.empty()
                   && precedence(c)
                          <= precedence(st.top())) {
                postfix += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    // Pop all the remaining elements from the stack
    while (!st.empty()) {
        postfix += st.top();
        st.pop();
    }

    return postfix;
}
char alpha[30];
int counter=0,value[30];
// The main function that returns value 
// of a given postfix expression
int evaluatePostfix(string exp)
{
	// Create a stack of capacity equal to expression size
	stack<int> st;
char x; int b;
	// Scan all characters one by one
	for (int i = 0; i < exp.length(); ++i) {
		x=exp[i];
		// If the scanned character is an operand 
		// (number here), push it to the stack.
		if ((x >= 'a' && x<='z') ||(x>='A' && x<='Z'))
            {
            cout <<"Enter the value of "<<x<<"=";
            cin >> b;
			st.push(b);
            }
		// If the scanned character is an operator, 
		// pop two elements from stack apply the operator
		else {
			int val1 = st.top();
			st.pop();
			int val2 = st.top();
			st.pop();
			switch (x) {
			case '+':
				st.push(val2 + val1);
				break;
			case '-':
				st.push(val2 - val1);
				break;
			case '*':
				st.push(val2 * val1);
				break;
			case '/':
				st.push(val2 / val1);
				break;
            case '^':
				st.push(val2 ^ val1);
				break;
			}
		}
	}
	return st.top();
}

int main()
{
    string infix ;
    cout<< "enter the infix expression";
    cin >> infix;
    cout << "Infix Expression: " << infix << endl;
    cout << "Postfix Expression: " << infixToPostfix(infix) <<endl;
    cout << "Evaluated Postfix Expression: " << evaluatePostfix(postfix);
         
    return 0;
}
