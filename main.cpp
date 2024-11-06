#include <iostream>
#include "printSum.hpp"
using namespace std;

int main(){
    int entries = 1;
    int* array = new int[entries];
    do{
        cout << "Enter an integer, enter 0 if done: " << endl;
        cin >> array[entries];
        entries++;
    }while(array[entries - 1] != 0);
    printSum(array, entries);
    delete[] array;
    array = NULL;
    return 0;
}

//Write a program that dynamically allocates an array of integers, fills it with user input, then prints the sum of that array.
