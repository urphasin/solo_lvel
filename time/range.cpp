#include <bits/stdc++.h>

using namespace std;
using namespace std::chrono;

#define ll long long

void sol1(year_month_day& start, year_month_day& end) {
  // Validate date
  if (!start.ok() || !end.ok()) {
    cout << "Bad Date" << "\n";
    return;
  }

  // Convert dates into a day_based timeline
  sys_days start_days = start;
  sys_days end_days = end;

  // Calculate difference
  auto difference = end_days - start_days;

  cout << "Days between dates: " 
    << difference.count() << "\n";
}

int main() {

  int t = 1;
  // cin >> t;
  while (t--) {
    int y1, m1, d1;
    int y2, m2, d2;

    cout << "Enter start date (YYYY MM DD): ";
    cin >> y1 >> m1 >> d1;
    cout << "\n";
    cout << "Enter end date (YYYY MM DD): ";
    cin >> y2 >> m2 >> d2;
    cout << "\n\n";

    chrono::year_month_day start{
      year{ y1 },
      month{ static_cast<unsigned>(m1) },
      day{ static_cast<unsigned>(d1) }
    };

    chrono::year_month_day end{
      year{ y2 },
      month{ static_cast<unsigned>(m2) },
      day{ static_cast<unsigned>(d2) }
    };

    sol1(start, end);
  }

  cout << endl;
  return 0;

}

// g++ -std=c++20 range.cpp -o ans && ./ans && rm -rf ./ans 
