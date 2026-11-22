#include <bits/stdc++.h>

using namespace std;

#define ll long long



void factorialApproximationFormulae(int n) {
  double ans = sqrt(2 * M_PI * n) * pow((n / std::exp(1.0)), n);

  cout << n << "! = " << ans << endl;
}

int main() {

  for (int i = 0; i < 10; i++) {
    factorialApproximationFormulae(i);
  }

  cout << endl;
  return 0;
  
}

// g++ factorial.cpp -o ans && ./ans && rm -rf ./ans 
