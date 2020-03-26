#include <iostream> 
using namespace std; 

int main() 
{ 
    // Post increment 
    int a = 1; 
    cout << " a value : " << a << endl; 
    int b = a++; 
    cout << " b value after a++ : " << b << endl; 
    cout << " a value after a++ : " << a << endl;
	
	// Pre increment 
    a = 1; 
    cout << " a value : " << a << endl; 
    b = ++a; 
    cout << " b value after ++a : " << b << endl; 
    cout << " a value after ++a : " << a << endl;

    return 0;
}	
	