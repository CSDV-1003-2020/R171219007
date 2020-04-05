#include <iostream>
#define MAX 10

using namespace std;

class Queue
{
      int front,rear;
      int queue[MAX];
 
      public:
  
      Queue()
      {
        front=rear=-1;
      }
 
       void qinsert(int item)
       {
              if(rear==MAX-1)
             {
                cout<<"\nQUEUE OVERFLOW";
             }
             else if(front==-1 && rear==-1)
             {
                front=rear=0;
                queue[rear]=item;
                cout<<"\nITEM INSERTED: "<<item;
             }
             else
             {
                rear++;
                queue[rear]=item;
                cout<<"\nITEM INSERTED: "<<item;
             }
       }