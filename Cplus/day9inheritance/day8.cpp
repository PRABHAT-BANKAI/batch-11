#include <iostream>
#include <string.h>

using namespace std;

// Inheritance concept // passing a data into another class from one class.
// types of  ineritance
// multple inheritence
// single inheritence
// hierarichical ineritance
// multilevel inheritance

// access specifiers
// Public
// Private
// Protected

// single inheritance

// multiple Inheritance

class Movie
{
public:
  int a = 8;
  string name = "best movie";

  void get()
  {
    cout << "method from A" << endl;
  }
};

class Bollywood : public Movie
{
public:
  int c = 9;
  char n = 'B';
  void show()
  {
    cout << "method from B" << endl;
  }
};

class Hollywood : public Movie  // : public A , public B
{
public:
  int d = 9;
  char n = 'H';
  void show()
  {
    cout << "method from C" << endl;
  }
};

int main()
{
  Hollywood o1;
  Bollywood o2;

  cout << o1.name << o1.n << endl;
  cout << o2.name << o2.n << endl;

  return 0;
}