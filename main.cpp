/* For testing purposes */

#include "matrix.hpp"
#include <iostream>

int main() {
    span::Matrix<int> B = span::Matrix<int>({3, 2});
    B._data = {
        5, 4,
        3, 8,
        7, 6
    };

    span::Matrix<int> A = span::Matrix<int>({2, 1});
    A._data = {
        1,
        -1,
    };

    span::Matrix<int> C = span::Matrix<int>::transpose(A);
    std::cout << (A == span::Matrix<int>::transpose(A)) << std::endl;
    std::vector<int> x = B.get_row(2);
}

