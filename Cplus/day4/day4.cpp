// - static keyword
// - Static data member
// - Static member functions
// - Scope Resolution Operator ::

#include <iostream>
#include <string.h>
using namespace std;

class Student
{
public:
  int id;                   // 4000bytes
  static char college[100]; // 1 byte // 1000bytes // extra space nah create ek space create
  float perc;               // 4000bytes

  static void show() // static member function
  {
    // cout << id << endl;
    cout << college << "show" << endl;
  }

}; // 108 *2 = 108000 space
class Emp
{
public:
  int id;                   // 4000bytes
  static char college[100]; // 1 byte // 1000bytes // extra space nah create ek space create 8100
  float perc;               // 4000bytes
};

char Student::college[100] = "maharajaagrsen";
char Emp::college[100] = "abcd";

int main()
{

  Student s1, stu2;
  Emp s2;

  s1.id = 5;
  s1.perc = 34.22;

  cout << s1.id << s1.perc << s1.college << endl;
  s1.show();
  strcpy(Student::college,
         "xyz");

  stu2.id = 75;
  stu2.perc = 234.22;
  stu2.show();
  cout
      << stu2.id << stu2.perc << stu2.college << endl;

  s2.id = 51;
  s2.perc = 94.22;

  cout << s2.id << s2.perc << s2.college << endl;

  return 0;
}
