#include <iostream>

using namespace std;

class A
{
  // method
  //  Method Overloading
  // multiple methods create (more then two methods )
  // all methods  name must be same.
  // parameters must be different
public:
  void bus()
  {
    cout << " running bus " << endl;
  }
  void bus(int num1)
  {
    cout << " running bus with " << num1 << "passangers" << endl;
  }
  void bus(int num1, int speed)
  {
    cout << " running bus with " << num1 << "passangers" << "with bus speed" << speed << endl;
  }
};

int main()
{
  A p1;

  p1.bus();
  p1.bus(5);
  p1.bus(10, 80);

  return 0;
}