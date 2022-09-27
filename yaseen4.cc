#include <iostream>
using namespace std;

int main() {
  int row, counter = 0, counter1 = 0, h;
  cin >> row;
  for (int i = 1; i <= row; i++)
  {
    for (int j = 1; j <= row - i; j++)
    {
      cout << "  ";
      ++counter;
    }
    while (h != 2 * i - 1)
    {
      if (counter <= row-1){
        cout << i + h << " ";
        ++counter;
      } 
      else {
        ++counter1;
        cout << i + h - 2 * counter1 << " ";
      }
      ++h;
    }
    counter1 = counter = h = 0;
    cout << endl;
  } 
  return 0;
}
