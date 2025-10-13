#include <iostream>

using namespace std;

class Classic
{
  // method
  //  Method Overriding
  // multiple methods create (more then two methods )
  // all methods  name must be same.
  // parameters must be same
  // derive in multiple Classes ( 2 more classes)
  // Inheritance is required
public:
  void wear()
  {
    cout << "kurta wearing" << endl;
    return;
  }
};

class Modern : public Classic
{
public:
  void wear()
  {
    cout << "shirt pant" << endl;
    return;
  }
};

int main()
{
  Classic p2;
  Modern p1;
  p2.wear();
  p1.wear();

  return 0;
}