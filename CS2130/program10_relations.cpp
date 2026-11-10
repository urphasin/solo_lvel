#include <bits/stdc++.h>

using namespace std;

/*

Ask for user input for a series of ordered pairs comprised of integers.  
Print out the relation, the domain, and range.  The output should be properly
formatted, though if you have a trailing "," it's not a big deal.  Output should
look similar to the following:

Relation = {(1,2), (2,1), (3,2), (4, 5)}
Domain = {1, 2, 3, 4}
Range = {1, 2, 5}

*/

int main() {
  set<pair<int, int>> relation;
  set<int>            domain;
  set<int>            range;

  int n; // input test case;
  cout << "enter another input: 1(yes), 2(no)";
  cin >> n;

  while( n != 2 ) {
    cout << "enter ordered pair space separated: " << "\n";
    int x, y;
    cin >> x >> y;

    relation.insert({x, y});
    
    cout << "enter another input: 1(yes), 2(no)";
    cin >> n;
  }
  
}