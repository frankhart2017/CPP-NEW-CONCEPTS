// pair_operators.cpp
// Source: https://www.geeksforgeeks.org/pair-in-cpp-stl/
// 13th November 2019

#include <iostream>
#include <utility>

using namespace std;

int main() {
  pair<int, int> pair1 = make_pair(1, 12);
  pair<int, int> pair2 = make_pair(9, 12);

  cout<<(pair1 == pair2)<<endl;
  cout<<(pair1 != pair2)<<endl;
  cout<<(pair1 >= pair2)<<endl;
  cout<<(pair1 <= pair2)<<endl;
  cout<<(pair1 > pair2)<<endl;
  cout<<(pair1 < pair2)<<endl; // Returns 1, but it should not as 12 = 12 and not < 12.

  return 0;
}
