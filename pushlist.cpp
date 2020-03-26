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


void Insert_Beg(Node *np)
{
    if(start == NULL)
        start = np;
    else
    {
        save = start;
        start = np;
        np->next = save;
    }
}

void Display(Node *np)
{
    while(np != NULL)
    {
        cout<<np->info<<" -> ";
        np = np->next;
    }
    
    cout<<" !!! \n";
}

	
int main()
{
   
    return 0;
}
