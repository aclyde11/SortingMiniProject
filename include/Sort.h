//
// Created by Austin Clyde on 6/12/17.
//

#ifndef SORTINGMINIPROJECT_SORT_H
#define SORTINGMINIPROJECT_SORT_H

#include <iostream>
#include <stdio.h>
#include <vector>

template <typename T>
class Sort {

protected:
    std::vector<T>  data;
    std::vector<T> sorted_data;

public:
    Sort(std::vector<T> array);

    virtual std::vector<T> sort() = 0;

    std::vector<T> get_original_data() {return data;};

    std::vector<T> get_sorted_data() {return sorted_data;};

    void print_sorted_vector();
    void print_original_vecotr();
};


#endif //SORTINGMINIPROJECT_SORT_H
