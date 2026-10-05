#include <bits/stdc++.h>

using namespace std;

#define ll long long



int main() {
  string grid, s;
  
  int m, n;
  cin >> n >> m;
  while(n!= 0 && m!= 0) {
    
    for (int i = 0; i < n; i++) {
     for (int j = 0; j < m; j++) {
      cin >> s;
      cout << s;
     }
     cout << endl;
    }


    cin >> n >> m;
  }

  return 0;
}