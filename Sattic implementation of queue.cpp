// program to demostrate static implementation stack

#include <iostream>
#define SIZE 10

using namespace std;

class queue
{
    int data[SIZE];
    int  rear, front;
    
    public:
    queue()
    {
        front=rear=-1;
        
    }
        void insert(int element)
        {
            if(isFull()==1)
                cout<<"queue is full";
            else
                data[++rear]= element;
                if(front== -1)
                    front=0;
            
        }
        
        int remove()
        {
            if(isEmpty()==1)
                return -1;
            else 
                return data[front++];
        }
        
        int isEmpty()
        {
            if(rear==front==-1 || front>rear)
                return 1;
        
        }
        
        int isFull()
        {
            if (rear==SIZE-1)
                return 1;
            else
                return 0;
        }
        
        int peek()
        {
            if(isEmpty()==1)
                return -1;
            else
                return data[front];
        }
};

int main() 
{
   cout<<"Static emplementation of queue \n";
   queue q;
   q.insert(10);
   q.insert(20);
   q.insert(30);
   
   cout<<"\n queue is Empty ?"<<q.isEmpty();
   cout<<"\n queue is Full ?"<<q.isFull();
   
   cout<<"\n Element is at top position"<<q.peek();
   cout<<"\n Element remove form Stack"<<q.remove();
   cout<<"\n Element remove form Stack"<<q.remove();


    return 0;
}
