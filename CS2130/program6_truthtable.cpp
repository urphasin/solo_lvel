#include <bits/stdc++.h>
using namespace std;

#define ll long long


/*
Print out the truth table for the following proposition using the variables a, b, c, d, e.
The output should contain the header and 32 more lines for the table.
You should use capital a (A) for AND, and capital v (V) for OR in the output.

Proposition:
(( c V ~d ) A b ) A ~( d V a A e )
*/


void solve() {
  for (int i = 0; i < 32; i++) {
    vector<int> bits(5);

    for (int j = 0; j < 5; j++) {
      bits[j] = (i >> (4 - j)) & 1; // making it 5 bits with right shifting and masking.
    }

    int A = bits[0];
    int B = bits[1];
    int C = bits[2];
    int D = bits[3];
    int E = bits[4];

    int res = ((C || !D) && B) && !(D || A && E);
    
    // output
    cout << A << setw(6) << B << setw(6) << C << setw(6) << D << setw(6) << E << setw(21) << res << endl;

    cout << endl;
  }
}

void header() {
  cout << "a" << setw(6) << "b" << setw(6) << "c" << setw(6) << "d"<< setw(6) << "e" << setw(40) << "(( c V ~d ) A b ) A ~( d V a A e )" << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int t = 1;
  // cin >> t;
  header();
  while(t--) solve();

  cout << endl;
  return 0;
}

// g++ 0.cpp -o ans && ./ans && rm -rf ./ans 
