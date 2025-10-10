#include <iostream>
#include <string.h>

using namespace std;

class Student
{
public:
  void show()
  {
    cout << "I am a student" << endl;
  };
};

int main()
{
  // - Pointer Object //
  // int a = 10;
  // int *ptr = &a;
  // cout << *ptr << endl;
  // cout << ptr << endl;

  // Student s1; // object
  // Student *s1ptr = &s1;
  // s1.show();
  // s1ptr->show();

  // - Array of Pointer objects
  // Student s1, s2;
  // Student *arr[2];

  // arr[0] = &s1;
  // arr[1] = &s2;

  //  arr[0]->show();
  // arr[1]->show();

  //   int *ptr = new int; // allocated memory for int
  // *ptr = 20;
  // cout << *ptr;

  Student *s1 = new Student; // create object  dynamically

  // const int number = 5;
  // number = 7;
  // number = 89;

  delete s1;
  // Allocate Heap memory
  int *array = new int[10];

  s1->show();
    //   // Deallocate Heap memory
    delete[] array;
  return 0;
}