
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>

#include "algorithms/bubble_sort.h"
#include "algorithms/insertion_sort.h"
#include "data-structures/linked_list.h"

void printVector(std::vector<int> numbers);

int main() {
    
    std::vector<int> numbers;
    
    srand(time(NULL));
    
    for(size_t i = 0; i < 100; i++) {
        int number = rand() % 1000 + 1;
        numbers.push_back(number);
    }
    std::cout << "Unsorted: " << std::endl;
    printVector(numbers);
    
    // Sorting Algorithms
    //bubble_sort(numbers);
    insertion_sort(numbers);
    
    std::cout << std::endl;
    
    std::cout << "Sorted: " << std::endl;
    printVector(numbers);
    
    // Linked List
    LinkedList l;
    l.insert(1);
    l.insert(2);
    l.insert(3);
    l.display();

    return 0;
}

void printVector(std::vector<int> numbers) {
    for (size_t i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i] << ", ";
    }
    std::cout << std::endl;
}
