#include <bits/stdc++.h>

using namespace std;

#define ll long long


void sol1() {
  random_device rd;
  mt19937 gen(rd());

  unsigned int seed = rd();
  
  cout << "Seed: " << seed << "\n";
  cout << "Gen:  " << gen() << "\n";

  uniform_int_distribution<int> door(0, 2);
  cout << "Door: " << door(gen) << "\n";

  int prizeDoor = door(gen);
  int initialDoor = door(gen);

  // Algorithm
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int t = 5;
  // cin >> t;
  while(t--){
    sol1();
    cout << "\n";
  }

  cout << endl;
  return 0;
  
}

// g++ program8_fun_game.cpp -o ans && ./ans && rm -rf ./ans 
