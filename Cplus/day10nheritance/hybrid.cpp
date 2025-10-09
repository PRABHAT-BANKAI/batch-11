// - Types of Inheritance (Multiple, Hierarchical, and Hybrid)

// - Error of Ambiguity(ambiguous)//  jab same function k variable or funciton Name  pass in two parent classes unko ek derevied  class mae inherited kar leta toh complier confuse hojata kismae sae arah hai

// - Solution of Ambiguity (Using Scope Resolution Operator)

#include <iostream>
#include <string.h>

using namespace std;

class A
{
  private:
  int number = 5;
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

class C : public A
{
public:
  void getC()
  {
    cout << "hello from C" << endl;
  }
};

class D : public B, public C
{
public:
  void getD()
  {
    cout << "hello from D" << endl;
  }
};

int main()
{
  D o1;

  o1.getB();
  o1.getC();
  o1.getD();
  o1.B::getA();//Solution of Ambiguity (Using Scope Resolution Operator)(::)
  o1.C::getA();
  return 0;
}


  //   specifiers           with same class             in derived class          outside the class

 //  1.    private                  Yes                      NO                         No

  // 2.   protected                 Yes                      Yes                        No

//  3.     public                 Yes                         Yes                       Yes