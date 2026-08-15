#include <iostream>
#include <array>
#include <vector>

int main() {

  std::vector<int> a = {1, 2, 3};
  a.insert(a.begin(), 15);
  a.push_back(2);
  a.push_back(2);
  a.push_back(2);
  a.push_back(2);
  a.push_back(2);
  a.push_back(2);
  a.push_back(12);
  a.push_back(14);
  std::cout << "a.capacity() = " << a.capacity() << std::endl;
  std::cout << "a.size() = " << a.size() << std::endl;
  
}