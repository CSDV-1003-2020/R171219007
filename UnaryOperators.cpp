#include <iostream> 
using namespace std; 

int main() 
{ 
    // Post increment 
    int a = 2; 
    cout << " A value : " << a << endl; 
    int b = a++; 
    cout << " B value after A++ : " << b << endl; 
    cout << " A value after A++ : " << a << endl;
	
    // Pre increment 
    a = 2; 
    cout << " A value : " << a << endl; 
    b = ++a; 
    cout << " B value after ++A : " << b << endl; 
    cout << " A value after ++A : " << a << endl;
	
	// Post decrement 
    a = 6; 
    cout << " A value before decrement : " << a << endl; 
    b = a--; 
    cout << " B value after A-- : " << b << endl; 
    cout << " A value after A-- : " << a << endl;
	
	// Pre decrement 
    a = 6; 
    cout << " A value : " << a <<endl; 
    b = --a; 
    cout << " B value after --A : " << b << endl; 
    cout << " A value after --A : " << a << endl;

    return 0;
}	
	