// var_assign_expr.cpp
#include <iostream>
#include <cstdlib>
#include <string>

int main()
{
  using namespace std;

  string line1, line2; // Сразу две переменные, пустые строки.
  getline(cin, line1);
  getline(cin, line2);

  line1 = line1 + line2; // Заменить первую строку на результат "склеивания".
  cout << line1 << endl;
  return EXIT_SUCCESS;
}
