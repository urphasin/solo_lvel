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
template <typename T, typename V>
void print_set_pair(set<pair<T, V>> relation) {
  cout << "{ ";
  for (auto [domain, range] : relation) {
    cout << "(" << domain << ", " << range << "), ";
  }
  cout << " }" << endl;
}

template <typename T>
void print_set_T(set<T> s) {
  cout << "{ ";
  for (auto e : s) {
    cout << e << ", ";
  }
  cout << " }" << endl;
}

int main() {
  set<pair<int, int>> relation;
  set<int>            domain;
  set<int>            range;

  
  int n;
  while(true) {
    cout << "enter a pair : 1(yes), 2(no): ";
    cin >> n;
    cout << endl;

    if(n != 1 && n != 2) { 
      cout << "Invalid input. Please try again. \n";
      continue; 
    }
    if(n == 2) { break; }

    cout << "enter ordered pair space separated: ";
    int x, y;
    cin >> x >> y;

    relation.insert({x, y});
    domain.insert(x);
    range.insert(y);
  }

  cout << "Relation: "; print_set_pair(relation);
  cout << "Domain: "; print_set_T(domain);
  cout << "Range: "; print_set_T(range);

  return 0;
}

// g++ program10_relations.cpp -o ans && ./ans && rm -rf ./ans 
