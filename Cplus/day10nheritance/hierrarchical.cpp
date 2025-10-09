#include <iostream>
#include <string.h>

using namespace std;

class A
{
public:
  int a_number = 12;
};
class B : public A
{
public:
  int b_number = 15;
};
class C : public A
{
public:
  int c_number = 19;
};

int main()
{

  B o1;
  C o2;
  cout << o1.a_number << endl;
  cout << o2.a_number << endl;

  return 0;
}