//
// Created by Austin Clyde on 6/12/17.
//

#include "Sort.h"

template <typename T>
Sort<T>::Sort(std::vector<T> vec) {
    data = vec;
    sorted_data = vec;
}

template <typename T>
void Sort<T>::print_sorted_vector() {
    for (int i = 0; i < Sort<T>::sorted_data.size(); i++)
        std::cout <<  Sort<T>::sorted_data[i] << ' ';
    std::cout << std::endl;
}

template <typename T>
void Sort<T>::print_original_vecotr() {
    for (int i = 0; i < Sort<T>::data.size(); i++)
        std::cout <<  Sort<T>::data[i] << ' ';
    std::cout << std::endl;
}

template class Sort<int>;
template class Sort<float>;