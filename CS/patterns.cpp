#include <bits/stdc++.h>
using namespace std;

#define ll long long


// simple pyramid pattern
void sol1(int n) {
  for(int i = 1; i <= n; i++) {
    for (int j = 1; j <= (n - i); j++) {
      cout << " ";
    }
    
    for(int k = 0; k < i; k++) {
      cout << "* ";
    }
    cout << endl;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int t = 1;
  // cin >> t;
  while(t--) { 
    sol1(5); 
  }

  cout << endl;
  return 0;
}

// g++ 0.cpp -o ans && ./ans && rm -rf ./ans 
