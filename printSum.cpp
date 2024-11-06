#include <iostream>

void printSum(int* array, int entries){
    int total = 0;
    for(int j = 0; j < entries; j++){
        total += *(array + j);
    }
    std::cout << "Total: " << total << std::endl;
}
