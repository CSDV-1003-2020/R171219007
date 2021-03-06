// This is a CPP program for Push from the begning of a link-list
#include<iostream>
using namespace std;

struct Node
{
	int info;
	Node *next;
    
} *start, *newptr, *save, *ptr;

Node *Create_New_Node( int n );
void Insert_Beg( Node *np );
void Display( Node *np );

int main()
{
    start = NULL;
    int inf;
    char ch = 'y';

    while( ch == 'y' || ch == 'Y' )
    {
        cout << " \n Enter INFO : "; cin >> inf;
        newptr = Create_New_Node( inf );

        if( newptr != NULL )
        {
            cout << " \n New Node Created !! ";
        }
        else
        {
            cout << " \n Cant Create New Node !! Aborting !! ";
            exit(0);
        }

        cout << " \n Now inserting this node at the beginning of the list ";
        Insert_Beg( newptr );

        cout << " \n Now the list is : ";
        Display( start );

        cout << " \n Press Y to enter more Nodes or N to exit : "; cin >> ch; 
		cout << endl;
    }

    return 0;
}

Node *Create_New_Node( int n )
{
    ptr = new Node;
    ptr->info = n;
    ptr->next = NULL;
    
    return ptr;
}

void Insert_Beg( Node *np )
{
    if( start == NULL )
        start = np;
    else
    {
        save = start;
        start = np;
        np->next = save;
    }
}

void Display( Node *np )
{
    while( np != NULL )
    {
        cout<< np->info << " -> ";
        np = np->next;
    }
    
    cout << " !!! \n";
}