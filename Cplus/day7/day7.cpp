#include <iostream>
#include <string.h>
using namespace std;

// constructor and destrcutor
// type of constructor
// 1.default constructor
// 2. parameterised constructor
// 3. copy constructor
// destrcutor

// constructor  :  A block of code  that is automatically invoked when a class is instatiated
// 1.  Name must be same as class name
// 2. constructor never return have any data type ;
// 3. never return anyting

class City
{
public:
  int id;
  string name;


  //// 2. parameterised constructor
  City(int id, string name) // constructor // when my class is initiated so my constructor will invoked
  {
    this->id = id;
    // strcpy(this->name, name);

    this->name = name;
    cout << this->id << "hello greeting" << this->name << "endl";
  }
  City()
  {
    cout << "hello from greetings";
  }
};

int main()
{
  City c1(1, "delhi"), c2(2, "mumbai"), c3,c4; // class intiated

  return 0;
}