#include <iostream>
#include <string.h>
using namespace std;

// destructor
// a block of code that is autmatically invoked when  a ////program is completed  or an object is deleted.

class City
{
public:
  City()// constructor
  {
    cout << " Welcom to city" << endl;
  }

  ~City()// destructor
  {

    cout << "Thank you for visit " << endl;
  }
};

int main()
{
  City c1;

  cout << "middle part " << endl;
  City c2;

  return 0;
}