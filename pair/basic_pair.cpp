// basic_pair.cpp
// Source: https://www.geeksforgeeks.org/pair-in-cpp-stl/
// 13th November 2019

#include <iostream>
#include <utility>

using namespace std;

int main() {
  pair<int, char> PAIR1; // Declaration of a pair

  PAIR1.first = 100;
  PAIR1.second = 'G';

  cout<<PAIR1.first<<endl;
  cout<<PAIR1.second<<endl;

  return 0;
}
