/* For testing purposes */

#include "tensor.h"
#include <iostream>

int main() {
    span::Tensor<int, 2> M = span::Tensor<int, 2>({2, 2}, {1, 2, 3, 4});
    M._get_element({0, 1});
}

