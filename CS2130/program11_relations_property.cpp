#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool isReflexive(const vector<vector<int>>& mat) {
  for (int i = 0, j = i; i < mat.size(); i++, j++) {
    if (mat[i][j] != 1) {
      return false;
    }
  }
  return true;
}

bool isIrreflexive(const vector<vector<int>>& mat) {
  for (int i = 0, j = i; i < mat.size(); i++, j++) {
    if (mat[i][j] != 0) {
      return false;
    }
  }
  return true;
}

bool isSymmetric(const vector<vector<int>>& mat) {
  
  return true;
}

bool isAsymmetric(const vector<vector<int>>& mat) {
  return true;
}

bool isAntisymmetric(const vector<vector<int>>& mat) {


  return true;
}

void print4x4Matix(const vector<vector<int>>& mat) {
  for (int i = 0; i < mat.size(); i++) {
    for (int j = 0; j < mat[i].size(); j++) {
      cout << mat[i][j] << "  ";
    }
    cout << endl;
  }
}


int main() {
  

  vector<vector<int>> matA = {
    { 1, 0, 0, 1 },
    { 0, 0, 0, 1 },
    { 1, 1, 0, 0 },
    { 1, 1, 0, 1 }
  };

  vector<vector<int>> matB = {
  { 1, 0, 0, 1 },
  { 0, 0, 0, 1 },
  { 0, 0, 0, 0 },
  { 0, 1, 0, 1 }
  };

  // irreflexive
  vector<vector<int>> matC = {
  { 0, 0, 0, 1 },
  { 0, 0, 0, 1 },
  { 1, 1, 0, 1 },
  { 1, 1, 0, 0 }
  };

  // reflexive
  vector<vector<int>> matD = {
  { 1, 0, 0, 1 },
  { 0, 1, 0, 1 },
  { 1, 1, 1, 0 },
  { 0, 1, 0, 1 }
  };

  vector<vector<vector<int>>> MatrixContainer {matA, matB, matC, matD};

  int i = 1;
  for (const auto& mat : MatrixContainer) {
    cout << "Matrix " << i << ":" << endl;
    print4x4Matix(mat);
    i++;

    if (!isReflexive(mat) &&
      !isIrreflexive(mat) &&
      !isSymmetric(mat) &&
      !isAsymmetric(mat) &&
      !isAntisymmetric(mat)
      ) {
      cout << "None" << endl;
      continue;
    }

    if (isReflexive(mat)) {
      cout << "Reflextive, ";
    }
    if (isIrreflexive(mat)) {
      cout << "Irreflexive, ";
    }
    if (isSymmetric(mat)) {
      cout << "Symmetric, ";
    }
    if (isAsymmetric(mat)) {
      cout << "Asymmetric, ";
    }
    if (isAntisymmetric(mat)) {
      cout << "Antisymmetric, ";
    }

    cout << "\n\n";
  }
  

  cout << endl;
  return 0;
  
}

// g++ program11_relations_property.cpp -o ans && ./ans && rm -rf ./ans 
