#include <bits/stdc++.h>

using namespace std;

#define ll long long

void printMatrix(vector<vector<int>> &mat) {
  for (int i = 0; i < mat.size(); i++) {
    for (int j = 0; j < mat[i].size(); j++) {
      cout << mat[i][j] << setw(5) << "";
    }
    cout << endl;
  }
}

void sol1() {
  int M, N;
  cout << "Create matrix dimenesion: " << "\n";
  cout << "Enter M and N spearated by space: ";
  cin >> M >> N;
  cout << endl;

  while(!(2 <= M && M <= 3) || !(2 <= N && N <= 3)) {
    cout << "M and N need to be between 2 and 3: ";
    cin >> M >> N;
    cout << endl;
  }

  vector<vector<int>> mat(M, vector<int>(N));
  // Create a matrix of M x N
  for(int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      mat[i][j] = 2 * (i + j) + (j * (i + 3)); 
    }
  }


  
  // Print matrix
  // printMatrix(mat);
}

int main() {
  ios::sync_with_stdio(false);
  // cin.tie(nullptr);
  
  int t = 1;
  // cin >> t;
  while(t--){
    sol1();
  }

  cout << endl;
  return 0;
}

// g++ program9_matrix.cpp -o ans && ./ans && rm -rf ./ans 
