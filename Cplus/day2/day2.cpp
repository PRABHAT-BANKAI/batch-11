#include <iostream>
using namespace std;

class Car // class help in an object
{
public:
  int topSpeed = 55;

  string brand ;

  void start()//when i will create function in class (we also called methods)
  {
    cout << "car is starting";
  }
};

int main()
{
  Car audi, bmw;

  audi.start();

  audi.brand = "a4";

  cout << audi.topSpeed <<audi.brand<< "\n";
  cout << bmw.topSpeed << "\n";

  return 0;

  
}


// There are three primary access modifiers in C++:
// public:
// Members declared as public are accessible from anywhere in the program, both inside and outside the class, including through objects of the class.
// public members are often used for interfaces that allow interaction with the object from external code.
// private:
// Members declared as private are only accessible from within the same class. They cannot be accessed directly from outside the class, even by objects of the class. 
// private members are typically used for internal data and helper functions that are not intended for external use, ensuring data integrity and preventing unauthorized modification.
// protected:
// Members declared as protected are accessible within the class itself and by its derived classes. They are not accessible from outside the class or by objects of the class, similar to private members, but they allow access to inherited classes.
// protected members are primarily used in inheritance hierarchies to allow derived classes to access certain members of their base class while still maintaining a level of encapsulation from external code.