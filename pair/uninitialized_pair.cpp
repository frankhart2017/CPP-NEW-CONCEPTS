// uninitialized_pair.cpp
// Source: https://www.geeksforgeeks.org/pair-in-cpp-stl/
// 13th November 2019

#include <iostream>
#include <utility>

using namespace std;

int main() {
  pair<int, double> PAIR1;
  pair<string, char> PAIR2;

  cout<<PAIR1.first<<" "<<PAIR1.second<<endl;

  cout<<PAIR2.first<<" "<<PAIR2.second<<endl;

  return 0;
}
