#include<iostream>
using namespace std;

int main () {

float total_units, bill_1, bill_2;

  cout << "Enter your total units: ";
  cin >> total_units;

  bill_1 = ( total_units * 18 ) + ( 0.05 * total_units);
  bill_2 = ( total_units * 46 ) + ( 0.1 * total_units );

  if (total_units <= 200)
    {
      cout << "your total bill is: " << bill_1 << endl;
    }
  else
    {
      cout << "Your total bill is: " << bill_2 << endl;
    }

    return 0;
}