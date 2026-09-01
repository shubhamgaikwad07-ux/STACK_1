#include<iostream>
#define MAX 5
using namespace std;
class stack                                        
{
  public:
  int A[MAX];
  int top;
  stack()
  {
    top=-1;
  }
  void push(int value)
  {
    if(top==MAX-1)
    {
      cout<<"\nStack is Overflow";
    }
    else
    {
      top++; 
      A[top]=value;
      cout<<value<<" \nis pushed in the stack";
    }
    
  }
  void pop()
  {
    if(top==-1)
    {
      cout<<"\nThe stack is underflow";
    }
    else
    {
      cout<<A[top]<<" is pooped from stack ";
      top--;
    }
  }
  void display()
  {
    if(top==-1)
    {
      cout<<"The stack is empty";  
    }
    else
    {
      for(int i=top;i>=0;i--)
      {
        cout<<A[i]<<endl;
      }
    }
  }
};
int main()
{
  stack s1;
  s1.push(23);
  s1.push(45);
  s1.push(34);
  s1.push(356);
  s1.push(3421);
  s1.push(3475);
  s1.display();
  s1.pop();
  s1.display();
  return 0;
}

