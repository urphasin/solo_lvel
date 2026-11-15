#include <bits/stdc++.h>

using namespace std;

int ourFunction(int n) {
  if (n == 5) {
    return 0;
  }
  cout << (n + 1) << "  ";
  return ourFunction(n + 1);
}

int main() {

  ourFunction(1); cout << endl;
}