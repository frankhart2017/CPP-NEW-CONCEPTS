// initialize_pair.cpp
// Source: https://www.geeksforgeeks.org/pair-in-cpp-stl/
// 13th November 2019

#include <iostream>
#include <utility>

using namespace std;

int main() {
  pair<string, double> PAIR2("GeeksForGeeks", 1.23);

  cout<<PAIR2.first<<endl;
  cout<<PAIR2.second<<endl;

  return 0;
}
