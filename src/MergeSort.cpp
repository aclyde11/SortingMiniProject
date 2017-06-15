//
// Created by Austin Clyde on 6/12/17.
//

#include "../include/MergeSort.h"

template<typename T>
std::vector<T> MergeSort<T>::sort() {
  Sort<T>::sorted_data = Sort<T>::data;
  mergeSort(0, (int) Sort<T>::data.size() - 1);
  return Sort<T>::get_sorted_data();
}

template<typename T>
void MergeSort<T>::mergeSort(int l, int r) {
  if (l < r) {
    int m = (l + r) / 2;
    mergeSort(l, m);
    mergeSort(m + 1, r);

    merge(l, m, r);
  }
}

template<typename T>
void MergeSort<T>::merge(int l, int m, int r) {
  int i, j, k = l;
  int n1 = m - l + 1;
  int n2 = r - m;

  std::vector<T> L((unsigned long) n1), R((unsigned long) n2);

  for (i = 0; i < n1; i++)
    L[i] = Sort<T>::sorted_data[l + i];
  for (j = 0; j < n2; j++)
    R[j] = Sort<T>::sorted_data[m + 1 + j];

  i = 0;
  j = 0;

  while (i < n1 && j < n2) {
    if (L[i] <= R[j]) {
      Sort<T>::sorted_data[k] = L[i];
      i++;
    } else {
      Sort<T>::sorted_data[k] = R[j];
      j++;
    }
    k++;
  }

  while (i < n1) {
    Sort<T>::sorted_data[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    Sort<T>::sorted_data[k] = R[j];
    j++;
    k++;
  }
}

template
class MergeSort<int>;
template
class MergeSort<float>;