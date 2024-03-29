// next_permuatation.cpp
// Source: https://www.geeksforgeeks.org/stdnext_permutation-prev_permutation-c/
// 14th November 2019

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int arr[] = {1, 2, 3};

  sort(arr, arr+3);

  cout<<"The 3! possible permutations with 3 elements: \n";
  do {
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;
  } while(next_permutation(arr, arr+3));

  cout<<"After loop: "<< arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl;

  return 0;
}
