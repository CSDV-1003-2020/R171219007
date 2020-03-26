#include<iostream>
using namespace std;

struct Node
{
    int info;
    Node *next;
    
} *start, *newptr, *save, *ptr;

Node *Create_New_Node(int n)
{
    ptr = new Node;
    ptr->info = n;
    ptr->next = NULL;
    
    return ptr;
}

void Insert_Beg(Node*);
void Display(Node*);

	
int main()
{
   
    return 0;
}
