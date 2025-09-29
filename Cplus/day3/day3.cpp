#include <iostream>
#include <string.h> // helps to assign string to char variable

using namespace std;
class Employee
{
public:
  int id;
  char name[50];

  int salary;
};

int main()
{

  Employee e1, e2;

  e1.id = 1;
  strcpy(e1.name, "Rahul"); // i get string.h library
  e1.salary = 2000;
  e2.id = 2;
  strcpy(e2.name, "jainam");
  e2.salary = 12121212;

  cout << e1.id << e1.name << e1.salary << "\n";
  cout << e2.id << e2.name << e2.salary << "\n";

  return 0;
}