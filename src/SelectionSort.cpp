#include "SelectionSort.hpp"
#include <algorithm>

void SelectionSort::ordenar(std::vector<int>& vetor) {
    for (size_t i = 0; i < vetor.size() - 1; ++i) {
        size_t menorIndice = i;
        for (size_t j = i + 1; j < vetor.size(); ++j) {
            if (vetor[j] < vetor[menorIndice]) {
                menorIndice = j;
            }
        }
        std::swap(vetor[i], vetor[menorIndice]);
    }
}