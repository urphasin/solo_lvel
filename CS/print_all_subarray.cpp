#include <bits/stdc++.h>
using namespace std;

#define ll long long





void solve() {
  vector<int> v {1, 2, 3, 4, 5};

  for(int i = 0; i < v.size(); i++) {
    for (int j = 0; j < v.size(); j++) {
      for (int k = i; k <= j; k++) {
        cout << v[k] << ",";
      }
      cout << endl;
    }
  }

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int t = 1;
  // cin >> t;
  while(t--) solve();

  cout << endl;
  return 0;
}

// g++ 0.cpp -o ans && ./ans && rm -rf ./ans 
