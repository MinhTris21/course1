/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maunsigned charain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material.
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief including the necessary headers, function prototypes, and the complete main function with its supporting functions
 *
 * <Add Extended Description Here>
 *
 * @author Tri Nguyen
 * @date 18-06-2024
 *
 */

#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main()
{
  unsigned char test[SIZE] = {34, 201, 190, 154, 8, 194, 2, 6,
                              114, 88, 45, 76, 123, 87, 25, 23,
                              200, 122, 150, 90, 92, 87, 177, 244,
                              201, 6, 12, 60, 8, 2, 5, 67,
                              7, 87, 250, 230, 99, 3, 100, 90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Prunsigned charing Functions Go Here */
  print_array(test, SIZE);
  print_statistics(test, SIZE);
  sort_array(test, SIZE);
  printf("Sorts the array from largest to smallest\n");
  print_array(test, SIZE);
}

// Function to prunsigned char the statistics of the array
void print_statistics(unsigned char arr[], unsigned char length)
{
  printf("Array Statistics:\n");
  printf("Minimum: %d\n", find_minimum(arr, length));
  printf("Maximum: %d\n", find_maximum(arr, length));
  printf("Mean: %d\n", find_mean(arr, length));
  printf("Median: %d\n", find_median(arr, length));
}

// Function to prunsigned char the array
void print_array(unsigned char arr[], unsigned char length)
{
  printf("Array Elements:\n");
  for (int i = 0; i < length; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

// Function to find the median of the array
unsigned char find_median(unsigned char arr[], unsigned char length)
{
  unsigned char sorted[SIZE];
  for (unsigned char i = 0; i < length; i++)
  {
    sorted[i] = arr[i];
  }
  sort_array(sorted, length);
  if (length % 2 == 0)
  {
    return (sorted[length / 2] + sorted[length / 2 - 1]) / 2;
  }
  else
  {
    return sorted[length / 2];
  }
}

// Function to find the mean of the array
unsigned char find_mean(unsigned char* arr, unsigned char length) {
    unsigned int sum = 0;
    for(unsigned int i = 0; i < length; i++) {
        sum += arr[i];
    }
    return sum / length;
}

// Function to find the maximum value in the array
unsigned char find_maximum(unsigned char arr[], unsigned char length)
{
  unsigned char max = arr[0];
  for (unsigned char i = 1; i < length; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }
  return max;
}

// Function to find the minimum value in the array
unsigned char find_minimum(unsigned char arr[], unsigned char length)
{
  unsigned char min = arr[0];
  for (unsigned char i = 1; i < length; i++)
  {
    if (arr[i] < min)
    {
      min = arr[i];
    }
  }
  return min;
}

// Function to sort the array from largest to smallest
void sort_array(unsigned char arr[], unsigned char length)
{
  for (unsigned char i = 0; i < length - 1; i++)
  {
    for (unsigned char j = 0; j < length - i - 1; j++)
    {
      if (arr[j] < arr[j + 1])
      {
        unsigned char temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}
/* Add other Implementation File Code Here */
