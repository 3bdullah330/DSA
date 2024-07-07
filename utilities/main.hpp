#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> array) {
  for (int num : array) {
    cout << num << "  ";
  }
}

void swapElements(vector<int>& array, int i, int j) {
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}
