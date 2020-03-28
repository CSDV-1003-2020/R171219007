// multiple inheritance 
#include <iostream> 
using namespace std; 
  
// first base class 
class Vehicle { 
  public: 
    Vehicle() 
    { 
      cout << "This is a Vehicle" << endl; 
    } 
}; 
  
// second base class 
class FourWheeler { 
  public: 
    FourWheeler() 
    { 
      cout << "This is a 4 wheeler Vehicle" << endl; 
    } 
};
