#include <iostream>
#include <string.h>
using namespace std;

// single inhertience

class A
{
public:
  int p = 12;
  string name = "batman";

  void bat()
  {

    cout << "hello i am batman";
  }
};

class B : public A // connect first class from 2nd class

{
public:
  int age = 22;

  string heroName = "superman";
  void super()
  {
    cout << "hello i am superman";
  }
};

int main()
{

  A o1;
  B a1;

  cout << o1.name << "  " << o1.p;
  cout << a1.name << a1.heroName << "   " << a1.age << endl;

  a1.super();

  a1.bat();

  o1.bat();

  return 0;
}