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
  
}

bool isAsymmetric(const vector<vector<int>>& mat) {
  
}

bool isAntisymmetric(const vector<vector<int>>& mat) {

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

  isReflexive(matD) ? cout << "reflexive\n" : cout << "not reflexive\n";


  
  cout << endl;
  return 0;
  
}

// g++ program11_relations_property.cpp -o ans && ./ans && rm -rf ./ans 
