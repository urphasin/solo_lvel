#include <bits/stdc++.h>

using namespace std;

long long nPr(double n, double r) {
  if (r > n || r < 0 || n < 0) {
    return 0;
  }

  long long result = 1;
  for (int i = 0; i < r; i++) {
    result *= (n - i);
  }
  return result;
}

long long nCr(double n, double r) {
  if (r > n || r < 0 || n < 0) {
    return 0;
  }

  long long result = 1;
  for (int i = 0, j = r; i < r; i++, j--) {
    result *= (n - i) / j;
  }
  return result;
}

int main() {
  cout << nPr(8, 5) << endl;
}

// g++ subsets.cpp -o ans && ./ans && rm -rf ./ans 
