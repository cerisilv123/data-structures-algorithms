/* Bubble sort is a simple sorting algorithm that repeatedly steps through the list,
compares adjacent elements and swaps them if they are in the wrong order. The pass
through the list is repeated until the list is sorted. */

// Worst-case time complexity = O(n^2)

#include "bubble_sort.h"

void bubble_sort(std::vector<int> &numbers) {
    for (size_t i = 0; i < numbers.size(); i++) {
        for (size_t j = 0; j < numbers.size() - i - 1; j++) {
            if (numbers[j] > numbers[j+1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
            }
        }
    }
}
