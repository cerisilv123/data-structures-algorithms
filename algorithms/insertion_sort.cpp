/* Insertion sort works similarly as we sort cards in our hand in a card game.
   We assume that the first card is already sorted then, we select an unsorted card.
   If the unsorted card is greater than the card in hand, it is placed on the right
   otherwise, to the left. In the same way, other unsorted cards are taken and put in their right place.
 
  1) If it is the first element, it is already sorted.
  2) Pick the next element.
  3) Compare with all the elements in sorted sub-list.
  4) Shift all the the elements in sorted sub-list that is greater than the value to be sorted.
  5) Insert the value.
  6) Repeat until list is sorted. */

// Worst-case time complexity = O(n^2)

#include "insertion_sort.h"

void insertion_sort(std::vector<int> &numbers) {
    for (size_t i = 0; i < numbers.size(); i++) {
        int temp = numbers[i];
        int j;
        for (j = i-1; j >= 0 && numbers[j] > temp; j--) {
            numbers[j+1] = numbers[j];
        }
        numbers[j+1] = temp;
    }
}
