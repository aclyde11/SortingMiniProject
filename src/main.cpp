#include <iostream>
#include <vector>
#include <random>

#include "Sort.h"
#include "MergeSort.h"
#include "BubbleSort.h"
#include "CountingSort.h"

void random_vector(std::vector<int> &vec, size_t N);

int main() {
  std::vector<size_t> test_sizes = {1, 2, 10, 20};

  for (auto N : test_sizes) {
    std::vector<int> vec;
    random_vector(vec, N);

    MergeSort<int> my_mereg(vec);
    std::cout << "Original data:, size " << N << std::endl;
    my_mereg.print_original_vecotr();
    std::cout << "Merge sorted:\n";
    my_mereg.print_sorted_vector();

    BubbleSort<int> my_bubble(vec);
    std::cout << "Bubble sorted:\n";
    my_bubble.print_sorted_vector();

    CountingSort<int> my_counting(vec);
    std::cout << "Counting sorted:\n";
    my_counting.print_sorted_vector();

    std::cout << std::endl;
  }
  return 0;
}

void random_vector(std::vector<int> &vec, size_t N) {
  std::random_device rd; // obtain a random number from hardware
  std::mt19937 eng(rd()); // seed the generator
  std::uniform_int_distribution<> distr(0, 100); // define the range
  vec.assign(N, 0);
  for (int i = 0; i < N; i++) {
    vec[i] = distr(eng);
  }
}