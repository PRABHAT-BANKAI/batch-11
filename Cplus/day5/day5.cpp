#include <iostream>
#include <string.h>
using namespace std;

// What is a Static member?

// - static keyword

// - Static data member

// - Static member functions

// - Scope Resolution Operator

class Student
{
public:
  int id;               // 4bytes
  static char clg[100]; // 100 bytes
  float marks;          // 4 bytes

  static void show(){
    cout<<clg;
  }
};

class Employee
{
public:
  int id;               // 4bytes
  static char clg[100]; // 100 bytes
  float marks;
};

char Student::clg[100] = "ABC"; // scope resolution operator ::
char Employee::clg[100] = "XYZ";
int main()
{
  Student s1, s2;
  Employee e1, e2;
  // s2.id = 1;

  // s2.marks = 12;

  // cout << s2.id << s2.clg << s2.marks << "\n";

  s1.id = 2;

  s1.marks = 13;

  cout << s1.id << s1.clg << s1.marks << "\n";
  s1.show();

  // cout << Employee::clg;


  //  e1.id = 1;

  // e1.marks = 12;

  // cout << e1.id << e1.clg << e1.marks << "\n";


  return 0;
}
