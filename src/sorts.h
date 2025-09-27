#ifndef SORTS_H
#define SORTS_H

#include <stdlib.h>
#include "sort_helper.h"

/*** code for selection sort ****/

// Returns the minimum integer from a range in an array
// Input: array - An array of integers
//        start - Where to start looking in an array
//        stop - End of where to search. Typically the 'size' of the array.
// Output: The index in an array of the minimum value between a range [start,stop]
int findMinimum(int *array, int start, int stop)
{
    // initialized start as the minimum index infering that the first value is the smallest
    int minimum_index = start;
    // going through the array from start to stop to find the minimum value
    // starting from start + 1 up to stop - 1
    for (int i = start + 1; i < stop; i++){
        // if we find a smaller value then we update the minimum index
        if (array[i] < array[minimum_index]){
            minimum_index = i;
        }
    }
    return minimum_index; // modify to return the index of the min value
}


// =============== Sort Function ===============
// Provided below is a sort function. I have also
// provided a template for how to document functions
// to help organize your code.
// Name: sort
// Input(s):
//  - 'array' is a pointer to an integer address.
//     This is the start of some 'contiguous block of memory' that we will sort.
//  - 'size' tells us how big the array of data is we are sorting.
//  -  'print' tells it to print out after each interation
// Output: No value is returned, but 'array' should be modified to store a sorted array of numbers.
void selectionSortIntegers(int *array, unsigned int size, int print)
{   // check for null pointer or size less than or equal to 1 or else we don't have to sort anything
    if (array == NULL || size <= 1){
        // already sorted nothing to return
        return;
    }
    // making the outer look to go through each value
    for (unsigned int i = 0; i < size - 1; i++){
        // finding the index of the minimum value in the unsorted part of the array
        int minimum_index = findMinimum(array, i, size);
        // swapping the found minimum value with the first value of the unsorted part
        if (minimum_index != i){
            swap(&array[i], &array[minimum_index]);
        }
    }
}

/***  Code for Insertion Sort ***/

// =============== Sort Function ===============
// Provided below is a sort function. I have also
// provided a template for how to document functions
// to help organize your code.
// Name: sort
// Input(s):
//  - 'array' is a pointer to an integer address.
//     This is the start of some 'contiguous block of memory' that we will sort.
//  - 'size' tells us how big the array of data is we are sorting.
//  - 'print' tells it to print out after each iteration 
// Output: No value is returned, but 'array' should be modified to store a sorted array of numbers.
void insertionSortIntegers(int *array, unsigned int size, int print)
{
    // check for null pointer or size less than or equal to 1 or else we don't have to sort anything
    if (array == NULL || size <= 1){
        // already sorted return nothing
        return;
    }
    // making the outer look to go through each value
    for (unsigned int i = 1; i < size; i++){
        // current value being inserted into the sorted part
        int key = array[i];
        // starting from last index of the sorted part
        int j = i - 1;
        // moving values of the sorted part 
        // shifting value that are greater than key position to the right
        // order matters so we need to check j >= 0 first before geting array[j]
        while (j >= 0 && array[j] > key){
            // shifting the value to the right
            array[j + 1] = array[j];
            // moving to the next index to the left
            j--;
        }
        // after shifting all the greater values to the right
        // we insert the key at its correct position which is j + 1
        array[j + 1] = key; 

        // printing it
        if (print == 1){
            printIntArray(array, size);
        }
    }
}

/** Code for Bubble Sort (from Lab -if not compiling, comment out the internals, but leave the function definition) ***/

// =============== Sort Function ===============
// Name: bubblesort
// Desc: O(n^2) comparison sort
// param(1): 'array' is a pointer to an integer address.
//           This is the start of some 'contiguous block of memory'
//           that we will sort.
// param(2)  'size' tells us how big the array of
//           data is we are sorting.
// param(3) 'print' tells it to print out after each iteration.
// Output:   No value is returned, but 'array' should
//           be modified to store a sorted array of size.
void bubbleSortIntegers(int *array, unsigned int size, int print)
{
    // code generated from lab

}

// ** You will work on merge sort during the lab on Module 06 ** //

// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int temp[], int l, int m, int r)
{
    if (arr == NULL || temp == NULL)
    {
        exit(1);
    }

    if (l > m || m + 1 > r)
        return;


}

// To be built during week 6 lab
// Name: mergeSort
// Input(s):
//          (1) 'arr' is a pointer to an integer address.
//              This is the start of some 'contiguous block of memory' that we will sort.
//          (2) 'temp' is a pointer to an integer address.
//          	This helps temporarily store the sorted subarray.
//          (3) 'l' and 'r' are integers, which are the first index and the last index of 'arr' respectively.
// Output: No value is returned, but 'array' should be modified to store a sorted array of numbers.
void merge_sort(int arr[], int temp[], int l, int r)
{
   
}

// lab build, merge sort

void mergeSortIntegers(int *array, unsigned int size, int print)
{ // print is ignored for this one
    if (array == NULL)
    {
        exit(1);
    }
    if (size <= 1)
        return;

    int *temp = (int *)malloc(sizeof(int) * size);
    merge_sort(array, temp, 0, size - 1);
    free(temp);
}

// provided code 

// =============== Helper Functions ===============
// Name:    compare
// Desc:    A compare function which returns
//          a value (positive,negative, or 0)
//          to show if the result is >,<, or =.
//
// Input:   a and b here are generic types,
//          that is why they are 'void'
int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

void quickSortIntegers(int* array, unsigned int size, int print) 
{   // print is ignored as qsort doesn't use it
    qsort(array, size, sizeof(int), compare);
}

#endif