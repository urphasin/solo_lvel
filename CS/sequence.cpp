#include <bits/stdc++.h>

using namespace std;

#define ll long long



int main() {
  
  for (int n = 1; n <= 20; n++) {
    int ans = 8 * ((n - 1) % 2);

    cout << ans;
    if (n != 20) {
      cout << ","; 
    }
  }


  cout << endl;
  return 0;
}

// g++ 0.cpp -o ans && ./ans && rm -rf ./ans 
