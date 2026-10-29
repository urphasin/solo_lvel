/*
staying = 33.33%
switching = 66.68%
*/

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

  // Algorithm
  int totalGames = 100'000;
  int stayWins = 0;
  int switchWins = 0;

  for (int i = 0; i < totalGames; i++) {
    int prizeDoor = door(gen);
    int initialDoor = door(gen);
  
    int montyDoor;
    do {
        montyDoor = door(gen);
    } while (montyDoor == prizeDoor || montyDoor == initialDoor);

    if (initialDoor == prizeDoor) {
      stayWins++;
    } else {
      switchWins ++;
    }
  }

  double stayRate = static_cast<double>(stayWins) / totalGames * 100.0;
  double switchRate = static_cast<double>(switchWins) / totalGames * 100.0;

  cout << fixed << setprecision(2);

  cout << "Total games: " << totalGames << "\n";
  cout << "Stay wins: " << stayWins << "\n";
  cout << "Switch wins: " << switchWins << "\n";

  cout << "Stay win rate: " << stayRate << "%\n";
  cout << "Switch win rate: " << switchRate << "%\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int t = 1;
  // cin >> t;
  while(t--){
    sol1();
    cout << "\n";
  }

  cout << endl;
  return 0;
  
}

// g++ program8_fun_game.cpp -o ans && ./ans && rm -rf ./ans 
