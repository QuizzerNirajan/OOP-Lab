#include <iostream>
using namespace std;
class Divzero{};
class Divminus{};
int main()
{
  int num1, num2;
  float ans;
  try {
    cout << "num1 : ";
    cin >> num1;
    cout << "num2 : ";
    cin >> num2;

    try {
      if(num2 < 0)
        throw Divminus();
      if(num2 == 0)
        throw Divzero();
      ans = float(num1)/float(num2);
    }
    catch (Divzero)
    {
      cout << "re-throwing Divzero exception \n";
      throw;
    }
    catch (Divminus)
    {
      cout << "division by minus in not allowed\n";
    }

  } catch (...) {
    cout << "caught exception";
  }
  cout << ans;
  return 0;
}
