#include <bits/stdc++.h>
using namespace std;

float calculateDiscount(float amount)
{
  float discount;
  if (amount < 100)
    discount = 0;
  else if (amount >= 100 && amount < 500)
    discount = 0.1 * amount;
  else
    discount = 0.2 * amount;
  return discount;
}

int main()
{
  float amount;
  cout << "Enter the amount: ";
  cin >> amount;
  cout << "Discount is: " << calculateDiscount(amount) << endl;
}