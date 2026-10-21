#include <bits/stdc++.h>
using namespace std;

#define ll long long


void reimann_sum() {
  //y = x^2
  int a = 1, b = 4;

  int inf = 100'000'000;
  double dx = static_cast<double>(b - a)/inf;

  cout << "dx = " << dx << endl;

  double ax = 1;
  double sum = 0;
  int y = 1;

  for(int i = 0; i < inf; i++) {
    double area = dx * (ax * ax);
    ax += dx;
    sum += area;
  }

  cout << "area = " << sum << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int t = 1;
  // cin >> t;
  while(t--) reimann_sum();

  cout << endl;
  return 0;
}

// g++ 0.cpp -o ans && ./ans && rm -rf ./ans 
