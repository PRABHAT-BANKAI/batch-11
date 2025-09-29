#include <iostream>

using namespace std;

class Employee
{
  string name;
  int power;

public:
  int setter(string name, int power)
  { // parameters

    this->name = name;
    this->power =power;
  }

  int getter()
  {
    cout << name << "  " << power << "\n";
  }
};

int main()
{
  Employee e1, e2;

  e2.setter("superman", 321);

  e1.setter("batman", 123);

  e1.getter();
  e2.getter();

  return 0;
}