#include <iostream>
using namespace std;
// - What is an Exception? // error => runtime

// - Difference between Error & Exception

// - What is Exception Handling?

// - try block// test the code

// - catch() block

// - throw keyword

// - Implement general exception block (using spread(…) operator)

// cou<<"helloworld" compile time error
// 5/0 = infinity

#include <iostream>
using namespace std;
int main()
{
  int a = 4;
  // int b = 0;
  try
  {

    if (a % 2 == 0)
    {
      cout << "even number";
    }
    else
    {
      throw a;
    }
  }
  catch (int errorCode)
  {
    cout << "Error occurred: odd " << errorCode;
  }

  return 0;
}