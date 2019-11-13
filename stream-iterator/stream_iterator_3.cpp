// stream_iterator_3
// Source: https://www.geeksforgeeks.org/stdistream_iterator-stdostream_iterator-c-stl/
// 14th November 2019

#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

int main() {
    vector<int> vi;

    istream_iterator<int> cin_it(cin);
    istream_iterator<int> eos;

    ostream_iterator<int> cout_it(cout, " ");

    for_each(cin_it, eos, [&](int a) {
        if (a % 2 == 0) {
            vi.push_back(a);
        }
    });

    sort(vi.begin(), vi.end());
  
    copy(vi.begin(), vi.end(), cout_it);

    return 0;
}
