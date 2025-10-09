// - Types of Inheritance (Multiple, Hierarchical, and Hybrid)

// - Error of Ambiguity

// - Solution of Ambiguity (Using Scope Resolution Operator)

#include <iostream>
#include <string.h>

using namespace std;

class A
{
public:
  void getA()
  {
    cout << "hello from A" << endl;
  }
};

class B : public A
{
public:
  void getB()
  {
    cout << "hello from B" << endl;
  }
};

class C : public B
{
public:
  void getC()
  {
    cout << "hello from C" << endl;
  }
};

int main()
{
  C o1;
  B o2;
  o1.getA();
  o1.getB();
  o1.getC();

  o2.getA();
  return 0;
}