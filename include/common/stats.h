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
 * @file stats.h
 * @brief < include declarations and documentation for the functions from the stats.c file. 
 * You will add function declarations for all required functions except main>
 *
 * <Add Extended Description Here>
 *
 * @author Tri Nguyen
 * @date 18-06-2024
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
#include <stdio.h>


// Function prototypes
void print_statistics(unsigned char arr[], unsigned char length);
void print_array(unsigned char arr[], unsigned char length);
unsigned char find_median(unsigned char arr[], unsigned char length);
unsigned char find_mean(unsigned char arr[], unsigned char length);
unsigned char find_maximum(unsigned char arr[], unsigned char length);
unsigned char find_minimum(unsigned char arr[], unsigned char length);
void sort_array(unsigned char arr[], unsigned char length);
/**
 * @brief <Those functions are use to prunsigned char the stastics (minimum, maximum, mean and the median), sorting the array from largest to smallest>
 *
 * Each functions correspond to the requirement of the assignment.
 * @param <arr> <given array in stats.c>
 * @param <length> <length of the array mentioned above>
 * @return <median, mean, maximum, minimum>
 */


#endif /* __STATS_H__ */
