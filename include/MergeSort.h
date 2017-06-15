//
// Created by Austin Clyde on 6/12/17.
//

#ifndef SORTINGMINIPROJECT_MERGESORT_H
#define SORTINGMINIPROJECT_MERGESORT_H

#include <iostream>
#include <stdio.h>
#include <vector>

#include "Sort.h"

template<typename T>
class MergeSort : public Sort<T> {

 private:
  void mergeSort(int l, int r);

  void merge(int l, int m, int r);

 public:
  MergeSort(std::vector<T> vec) : Sort<T>(vec) { sort(); };

  virtual std::vector<T> sort();

};

#endif //SORTINGMINIPROJECT_MERGESORT_H
