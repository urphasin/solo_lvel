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
  cout << "\n";
  for (auto [domain, range] : relation) {
    cout << "Pair: (" << domain << ", " << range << ") \n";
  }
}


int main() {
  set<pair<int, int>> relation;
  set<int>            domain;
  set<int>            range;

  
  int n;
  while(true) {
    cout << "enter input: 1(yes), 2(no): ";
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
  }

  print_set_pair(relation);
  
}

// g++ program10_relations.cpp -o ans && ./ans && rm -rf ./ans 
