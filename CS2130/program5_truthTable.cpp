#include <bits/stdc++.h>

using namespace std;

#define ll long long


char boolToChar(bool ans) {
  if (ans) { return 'T'; }
  return 'F';
}

bool truthValue(bool p, char op, bool q) {
  if (op == 'A') {
    return p && q;
  }
  else if (op == 'V') {
    return p || q;
  }

  return false;
}

int main() {
  bool p, q, notP, notQ;
  cout << "Enter p(0 or 1): ";
  cin >> p;
  cout << "\n";

  cout << "Enter q(0 or 1): ";
  cin >> q;
  cout << "\n";

  char op;

  cout << "Do you want to use AND(A) or OR(V): ";
  cin >> op;
  cout << "\n";

  cout << "Do you want to NOT p? Enter 1 for Yes 0 for No: ";
  cin >> notP;
  if (notP) { p = !p; }
  cout << "\n";

  cout << "Do you want to NOT q? Enter 1 for Yes 0 for No: ";
  cin >> notQ;
  if (notQ) { q = !q; }
  cout << "\n";
  

  // header for output
  cout << "p" << setw(7) << "q" << setw(10) << "p " << op << " q" << endl;
  // start truth table algorithm
  cout << "T" << setw(7) << "T" << setw(10) << boolToChar(truthValue(p, op, q)) << endl;
  cout << "T" << setw(7) << "F" << setw(10) << boolToChar(truthValue(p, op, !q)) << endl; 
  cout << "F" << setw(7) << "T" << setw(10) << boolToChar(truthValue(!p, op, q)) << endl;
  cout << "F" << setw(7) << "F" << setw(10) << boolToChar(truthValue(!p, op, !q)) << endl; 
  //end truth table algortithm

  return 0;
}

// g++ program5.cpp -o ans.out && ./ans.out && rm -rf ans.out
