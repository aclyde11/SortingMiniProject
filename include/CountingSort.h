//
// Created by Austin Clyde on 6/12/17.
//

#ifndef SORTINGMINIPROJECT_COUNTINGSORT_H
#define SORTINGMINIPROJECT_COUNTINGSORT_H

#include <vector>

#include "Sort.h"

template<typename T>
class CountingSort : public Sort<T> {

 private:
  int max(std::vector<int> vec);
  int min(std::vector<int> vec);

 public:
  CountingSort(std::vector<T> vec) : Sort<T>(vec) { sort(); };
  virtual std::vector<T> sort();
};

#endif //SORTINGMINIPROJECT_COUNTINGSORT_H
