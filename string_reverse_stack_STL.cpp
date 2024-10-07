#include<bits/stdc++.h>
#include <stack>
using namespace std;
int main()
{
stack <char> s;
char x;


cout <<"Enter the string" <<endl;

while((x=getchar())!='\n')
{
s.push(x);


}
cout << "\n Reverse string : \t"<<endl;
while(!s.empty())
{

cout << s.top() ;
s.pop();
}
}



