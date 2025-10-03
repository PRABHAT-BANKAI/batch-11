#include <iostream>
using namespace std;

// friend function // function which can access private attributres of another class

class Yuvraj
{
private:
  int money = 15;
  int age = 12;

  friend void jainam();
};

void jainam()
{
  Yuvraj y1;
  cout << y1.money << "\n";
}

int main()
{

  jainam();
  return 0;
}