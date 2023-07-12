// program to demostrate static implementation queue

#include <iostream>
#define SIZE 2
using namespace std;
class stack
{
    int data[SIZE];
    int top;
    
    public:
    stack()
    {
        top =-1;
        
    }
        void push(int element)
        {
            if(isFull()==1)
                cout<<"Stack is full";
            else
                data[++top]= element;
        }
        int pop()
        {
            if(isEmpty()==1)
                return -1;
            else 
                return data[top--];
        }
        int isEmpty()
        {
            if(top =-1)
                return 1;
            else
                return 0;
        }
        int isFull()
        {
            if (top==SIZE-1)
                return 1;
            else
                return 0;
        }
        int peek()
        {
            if(isEmpty()==1)
                return -1;
            else
                return data[top];
        }
};

int main() 
{
   cout<<"Static emplementation of Stack \n";
   stack stk;
   stk.push(10);
   stk.push(20);
   
   cout<<"\n Stack is Empty ?"<<stk.isEmpty();
   cout<<"\n Stack is Full ?"<<stk.isFull();
   cout<<"\n Element is at top position"<<stk.peek();
   cout<<"\n Element remove form Stack"<<stk.pop();
   cout<<"\n Element remove form Stack"<<stk.pop();


    return 0;
}
