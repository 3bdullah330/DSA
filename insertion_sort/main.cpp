#include <iostream>
#include <vector>
#include "./insertion_sort.hpp"
using namespace std;

int main() {
  vector<int> testArray = {10, 1, 2, 4, 3, 0, 5};
  testArray = insertionSort(testArray);
  printVector(testArray);

  return 0;
};
