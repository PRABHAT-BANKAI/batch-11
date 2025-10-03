#include <iostream>
using namespace std;

// array of object
// friend function

class Student
{
  int id;
  char name[100];
  int age;

public:
  void setter()
  {
    cout << "enter you id: ";
    cin >> this->id;
    cout << "enter you name: ";
    cin >> this->name;
    cout << "enter you age: ";
    cin >> this->age;
  }

  void getter()
  {

    cout << "ID:" << this->id << "\n";
    cout << "name:" << this->name << "\n";
    cout << "age:" << this->age << "\n";
  }
};

int main()
{
  // Student s1, s2;

  // s1.setter();
  // s2.setter();
  // s1.getter();
  // s2.getter();

  Student s[];

  // s[0].setter();
  // s[1].setter();
  // s[2].setter();
  // s[0].getter();
  // s[1].getter();
  // s[2].getter();
  for (int i = 0; i < 100; i++)
  {
    s[i].setter();
  }
  for (int i = 0; i < 100; i++)
  {
    s[i].getter();
  }

  return 0;
}