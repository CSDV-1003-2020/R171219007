// Hierarchical Inheritance 
#include <iostream> 
using namespace std; 
  
// base class 
class Vehicle  
{ 
  public: 
    Vehicle() 
    { 
      cout << "This is a Vehicle" << endl; 
    } 
}; 
  
  
// first sub lass  
class Car: public Vehicle 
{ 
  
};

