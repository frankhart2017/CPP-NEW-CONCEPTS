// stream_iterator_1.cpp
// Source: https://www.geeksforgeeks.org/stdistream_iterator-stdostream_iterator-c-stl/
// 14th November 2019

#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
  istream_iterator<int> cin_it(cin);
  istream_iterator<int> eos;

  ostream_iterator<int> cout_it(cout, " ");

  copy(cin_it, eos, cout_it); // Copy data from cin_it, eos containers into cout_it container

  return 0;
}
