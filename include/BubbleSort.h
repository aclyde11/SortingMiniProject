//
// Created by Austin Clyde on 6/12/17.
//

#ifndef SORTINGMINIPROJECT_BUBBLESORT_H
#define SORTINGMINIPROJECT_BUBBLESORT_H

#include <vector>

#include "Sort.h"

template<typename T>
class BubbleSort : public Sort<T> {

 private:
  //swaps pos x and pos y in Sort<T>::sorted_data
  void swap(int x, int y);

 public:
  BubbleSort(std::vector<T> vec) : Sort<T>(vec) { sort(); };

  virtual std::vector<T> sort();
};

#endif //SORTINGMINIPROJECT_BUBBLESORT_H
