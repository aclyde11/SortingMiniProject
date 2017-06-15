//
// Created by Austin Clyde on 6/12/17.
//

#include <vector>
#include <limits.h>

#include "Sort.h"
#include "CountingSort.h"

template<typename T>
int CountingSort<T>::max(std::vector<int> vec) {
  int max = INT_MIN;

  for (auto i : vec)
    if (i > max)
      max = i;

  return max;
}

template<typename T>
int CountingSort<T>::min(std::vector<int> vec) {
  int min = INT_MAX;

  for (auto i : vec)
    if (i < min)
      min = i;

  return min;
}

template<typename T>
std::vector<T> CountingSort<T>::sort() {
  int M = max(Sort<T>::data), m = min(Sort<T>::data), n = (int) Sort<T>::data.size();
  int range = M + 1;

  //shift sorting vector to [0, n+m]
  std::vector<int> vec = Sort<T>::data;
  if (m < 0) {
    std::transform(vec.begin(), vec.end(), vec.begin(), std::bind2nd(std::plus<int>(), -1 * m));
    range += m;
  }

  //fill in count vector
  std::vector<int> counts;
  counts.assign((size_t) (range), 0);
  for (auto i : vec) {
    counts[i]++;
  }

  //cumulative sum
  for (int i = 1; i < range; i++) {
    counts[i] += counts[i - 1];
  }

  //look up spot in counts
  for (int i = 0; i < n; i++)
    Sort<T>::sorted_data[counts[vec[i]] - 1] = vec[i];

  //shift vector back
  if (m < 0) {
    std::transform(Sort<T>::sorted_data.begin(),
                   Sort<T>::sorted_data.end(),
                   Sort<T>::sorted_data.begin(),
                   std::bind2nd(std::plus<int>(), m));
  }

  return Sort<T>::sorted_data;
}

template
class CountingSort<int>;