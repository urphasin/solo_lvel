#include <bits/stdc++.h>

using namespace std;

template <typename T>
void print1DTensor(vector<T> tensor) {
  for (int i = 0; i < tensor.size();i++) {
    cout << "T[" << i << "] = " << tensor[i] << endl;
  }
}

int main() {
  print1DTensor(vector<int> {1,2,3, 4, 5, 21});
}

// g++ tensor.cpp -o ans && ./ans && rm -rf ./ans 
