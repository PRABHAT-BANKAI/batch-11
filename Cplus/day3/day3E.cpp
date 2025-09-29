#include <iostream>
#include <string.h>

using namespace std;

class Employee
{
private:
  string name;
  int power;

public:
  int setter(int pow, string userName)
  {
    // strcpy(this->name, userName); //{name:"batman"}
    this->power = pow;
   this->name=userName;
  }

  void getter() // methods
  {

    cout << name << "power:" << power;
  }
};

int main()
{

  Employee e1, e2;

  e1.setter(400, "batman");

  e2.setter(700, "superman");
  e2.getter();
  e1.getter();

  return 0;
}