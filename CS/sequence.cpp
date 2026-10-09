#include <bits/stdc++.h>

using namespace std;

#define ll long long



int main() {
  // seq 1
  int An = 7;
  for (int n = 1; n <= 10; n++) {
    cout << An;
    
    An += 8 * ((n) % 2);
    if (n != 20) {
      cout << ","; 
    }
  }

  cout << endl;

  // seq 2
  An = 2;
  for(int n = 1; n <= 10; n++) {

  }

  cout << endl;


  // seq 3
  An = 7;
  for (int n = 1; n <= 10; n++) {
    cout << An;

    An += 8 * ((n) % 2) + 1;
    if (n != 20) {
      cout << ",";
    }
  }



  cout << endl;
  return 0;
}

// g++ 0.cpp -o ans && ./ans && rm -rf ./ans 
