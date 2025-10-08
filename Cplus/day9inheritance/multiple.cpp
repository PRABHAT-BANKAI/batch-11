#include <iostream>
#include <string.h>
using namespace std;

// multiple  inhertience

class A
{
public:
  int p = 12;
  string name = "batman";
};

class B

{
public:
  int age = 22;
  string heroName = "superman";
};

class D
{
public:
  string userName = "ironman";

  void gameplay()
  {

    cout << "hello from playstation";
  }
};

class C : public A, public B, public D
{
public:
  string game = "bgmi";
  int rating = 45;
};

int main()
{

  C s1;

  s1.gameplay();
  return 0;
}