#include <iostream>
#include <vector>
#include "../utilities/main.hpp"
using namespace std;

void putNumberInCorrectPosition(vector<int>& array, int currentIndex) {
  for (int i = currentIndex; ; i--) {
    int firstElement = array[i];
    int secondElement = array[i - 1];

    if (firstElement < secondElement) swapElements(array, i, i - 1);
    else return;
  }
}

vector<int> insertionSort(vector<int> array) {
  int arraySize = array.size();

  if (array.size() < 2) return array;

  for (int i = 1; i < arraySize; i++)
    putNumberInCorrectPosition(array, i);

  return array;
}
