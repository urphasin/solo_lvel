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
  ll res = nPr(n, r);

  ll rfactorial = 1;
  for(int i = r; i >= 1; i--) {
    rfactorial *= i;
  }

  return res/rfactorial;
}

int main() {


}

// g++ subsets.cpp -o ans && ./ans && rm -rf ./ans 
