#include <bits/stdc++.h>
using namespace std;

#define ll long long

void print_matrix(vector<vector<int>> M) {
  for (int i = 0; i < M.size(); i++) {
    for (int j = 0; j < M[i].size(); j++) {
      cout << M[i][j] << ", " << endl; 
    }
  }
}

void sol1() {

}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t = 1;
  // cin >> t;
  
  while (t--) { 
    sol1();

    vector<vector<int>> M = {
      {0, 1, 0},
      {0, 0, 1},
      {0, 0, 0}
    };

    print_matrix(M);

  }

  cout << endl;
  return 0;
}

// g++ 0.cpp -o ans && ./ans && rm -rf ./ans 
