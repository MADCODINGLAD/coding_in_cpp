#include <iostream>
using namespace std;
int main() {
  int ans;
  int a1 = 0, a2 = 1, a3;
  cout << "please enter a number: ";
  cin >> ans;
  if (ans < 1) {
    cout << "sorry that is way too low \nvalue must be higher than 0." << endl;
  } else if (ans > 0) {
    cout << a1 << " " << a2 << " ";
    for (int i = 2; i < ans; i++) {
      a3 = a1 + a2;
      cout << a3 << " ";
      a1 = a2;
      a2 = a3;
    }
  }
}