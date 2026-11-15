#include <bits/stdc++.h>

using namespace std;

#define ll long long


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

  vector<vector<int>> matC = {
  { 0, 0, 0, 1 },
  { 0, 0, 0, 1 },
  { 1, 1, 0, 1 },
  { 1, 1, 0, 0 }
  };

  vector<vector<int>> matD = {
  { 1, 0, 0, 1 },
  { 0, 1, 0, 1 },
  { 1, 1, 1, 0 },
  { 0, 1, 0, 1 }
  };

  
  cout << endl;
  return 0;
  
}

// g++ program11_relations_property.cpp -o ans && ./ans && rm -rf ./ans 
