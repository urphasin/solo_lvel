#include <bits/stdc++.h>

using namespace std;

#define ll long long

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
  // subsets of 5 element set ⊆ {A, B, C, D, E};
  ll res = 0;
  for(int i = 0; i <= 5; i++) {
    res += nCr(5, i);
  }
  cout << res << endl;
}

// g++ subsets.cpp -o ans && ./ans && rm -rf ./ans 
