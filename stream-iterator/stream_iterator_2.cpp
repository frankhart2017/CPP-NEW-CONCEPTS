// stream_iterator_2.cpp
// Source: https://www.geeksforgeeks.org/stdistream_iterator-stdostream_iterator-c-stl/
// 14th November 2019

#include <iostream>
#include <algorithm>
#include <fstream>
#include <iterator>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<string> strings_v;

  ifstream fin("input_file.txt");

  istream_iterator<string> fin_it(fin);
  istream_iterator<string> eos;

  ostream_iterator<string> cout_it(cout, " ");

  copy(fin_it, eos, back_inserter(strings_v));
  // back_inserter() - Output iterator that pushes from back instead of rewriting
  // Supported by containers that have push_back member functions like - vector, deque, list

  sort(strings_v.begin(), strings_v.end());

  copy(strings_v.begin(), strings_v.end(), cout_it);

  return 0;
}
