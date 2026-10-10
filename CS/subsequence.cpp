#include <bits/stdc++.h>
using namespace std;

#define ll long long





void solve() {
  vector<int> v {1, 2, 3, 4, 5, 1};

  for(int i = 0; i < v.size(); i++) {
    for(int j = i+1; j < v.size(); j++) {
      for (int k = i; k < v.size(); k++) {
        cout << j << ",";
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
