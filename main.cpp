#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  const int NUM_VALUES = 10;
  int values[NUM_VALUES];
  int count;
  int largest;
  int smallest;
  

for (count = 0; count < NUM_VALUES; count++)
   {
     cout << "Enter the numerical value #" << (count +1)<< ": ";
    cin >> values[count];
   }

  largest = smallest = values[0];
  for (count = 1; count < NUM_VALUES; count++)
  {
    if (values[count] > largest)
      largest = values[count];
    if (values[count] < smallest)
      smallest = values[count];
  }

  cout << "\nThe largest value entered is: ";
  cout << largest << endl;
  cout << "The smallest value entered is: ";
  cout << smallest << endl;

  return 0;
}