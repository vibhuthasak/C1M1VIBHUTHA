/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stat.h 
 * @brief find median,mean,max,min of array
 *
 * 
 *
 * @author Vibhutha Kumarage
 * @date 10/06/2017
 *
 */

#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief Print the array
 *
 * This function prints the array
 *
 * @param integer array
 * @return void
 */
void print_array(int list[]);

/**
 * @brief Sort the integer array
 *
 * This function sorts the array using bubble sort
 *
 * @param integer array
 *
 * @return sorted array
 */
void sort_array(int list[]);

/**
 * @brief find the median integer array
 *
 * This function find the median of an array
 *
 * @param sorted_integer array
 *
 * @return median value
 */
float find_median(int array[]);

/**
 * @brief find the mean value of interger array
 *
 * This function finds the mean
 *
 * @param integer array
 *
 * @return mean value
 */
float find_mean(int array[]);

/**
 * @brief find the max value of interger array
 *
 * This function finds the maximum value of an array
 *
 * @param sorted array
 *
 * @return maximun value
 */
int find_maximum(int array[]);

/**
 * @brief find the min value of interger array
 *
 * This function finds the minimum value of an array
 *
 * @param sorted array
 *
 * @return minimum value
 */
int find_minimum(int array[]);

#endif

