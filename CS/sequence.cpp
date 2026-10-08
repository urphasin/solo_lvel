#include <bits/stdc++.h>

using namespace std;

#define ll long long



int main() {
  
  for (int n = 1; n < 21; n++) {
    int ans = 8 * ((n - 1) % 2);

    cout << ans << ", "; 
  }


  cout << endl;
  return 0;
}