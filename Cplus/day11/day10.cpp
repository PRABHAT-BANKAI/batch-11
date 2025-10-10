#include <iostream>
#include <string.h>

using namespace std;

// - Pointer Object //

// - Array of Pointer objects

// - new operator//key word in c++ language // c++ mein memory  allocate karne  k liyae new operator ka use krte hai . dynamically  heap memory  space allocate krta hai

// - delete operator

class Student
{
public:
  void show()
  {
    cout << "I am a student" << endl;
  };
};

main()
{

  // int a = 10;

  // int *ptr = &a;

  // cout << ptr;

  // Student s1;
  // Student *ptr = &s1;
  // s1.show();
  // ptr->show();

  // Student s1, s2;
  // Student *arr[2];

  // arr[0] = &s1;
  // arr[1] = &s2;

  // arr[0]->show();
  // arr[1]->show();

  // int *ptr = new int; // allocated memory for int

  // *ptr = 20;

  // cout << *ptr;

  // Student *s1 = new Student; // create object  dynamically


  // delete ptr;

  // delete s1;

  //   s1->show();

  //   // Allocate Heap memory
  //   int* array = new int[10];

  //   // Deallocate Heap memory
    delete[] array;


  return 0;
}