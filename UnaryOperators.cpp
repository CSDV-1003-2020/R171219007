#include <iostream> 
using namespace std; 

int main() 
{ 
    // Post Increment 
    int a = 2; 
    cout << " A value : " << a << endl; 
    int b = a++; 
    cout << " B value after A++ : " << b << endl; 
    cout << " A value after A++ : " << a << endl;
	
    // Pre Increment 
    a = 2; 
    cout << " A value : " << a << endl; 
    b = ++a; 
    cout << " B value after ++A : " << b << endl; 
    cout << " A value after ++A : " << a << endl;
	
	// Post Decrement 
    a = 6; 
    cout << " A value before decrement : " << a << endl; 
    b = a--; 
    cout << " B value after A-- : " << b << endl; 
    cout << " A value after A-- : " << a << endl;
	
	// Pre Decrement 
    a = 6; 
    cout << " A value : " << a <<endl; 
    b = --a; 
    cout << " B value after --A : " << b << endl; 
    cout << " A value after --A : " << a << endl;

    return 0;
}	
// This is a program to understand unary operators in C++	
	