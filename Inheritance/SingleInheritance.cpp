// Single inheritance 
#include <iostream> 
using namespace std; 
  
// base class 
class Vehicle { 
  public: 
    Vehicle() 
    { 
      cout << "This is a Vehicle" << endl; 
    } 
}; 
  
// sub class derived from two base classes 
class Car: public Vehicle{ 
  
};