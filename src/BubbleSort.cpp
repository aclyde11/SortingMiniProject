//
// Created by Austin Clyde on 6/12/17.
//

#include <vector>

#include "../include/Sort.h"
#include "../include/BubbleSort.h"

template<typename T>
std::vector<T> BubbleSort<T>::sort() {
  size_t n = Sort<T>::sorted_data.size();
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (Sort<T>::sorted_data[j + 1] < Sort<T>::sorted_data[j])
        swap(j, j + 1);
    }
  }
  return Sort<T>::sorted_data;
}

template<typename T>
void BubbleSort<T>::swap(int x, int y) {
  T temp = Sort<T>::sorted_data[x];
  Sort<T>::sorted_data[x] = Sort<T>::sorted_data[y];
  Sort<T>::sorted_data[y] = temp;
}

template
class BubbleSort<float>;
template
class BubbleSort<int>;