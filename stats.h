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
 * @file stats.h
 * @brief This file include declarations and documentation for the functions from the stats.c file. 
 *
 * It's necessary function declarations for all required functions except main function and each declaration have to provide comments with a description of the function, the inputs and return value. 
 *
 * @author Antonio Gomes
 * @date March 29, 2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Print statistical data
 *
 * This function takes a array as input and it will the statistical data of the array including minimum, maximum, mean and median.
 *
 * @param A unsigned char pointer to an n-element data array
 * 
 * @return none
 */

void print_statistics(unsigned char *array);

 
/**
 * @brief  Prints the array to the screen
 *
 * This function takes as input the array and lenght of array and it will print the array to the screen.
 *
 * @param array -An unsigned char pointer to an n-element data array
 * @param lenght - An unsigned integer as the size of the array
 *
 * @return none
 */

void print_array(unsigned char *array, unsigned int lenght);

/**
 * @brief  Return the median of array
 *
 * This function takes as input the array and lenght of array and it will calculate the median of array.
 *
 * @param array -An unsigned char pointer to an n-element data array
 * @param lenght - An unsigned integer as the size of the array
 *
 * @return Char with median of array
 */

int find_median(unsigned char *array, unsigned int lenght);

/**
 * @brief  Return the mean of array
 *
 * This function takes as input the array and lenght of array and it will calculate the mean of array.
 *
 * @param array -An unsigned char pointer to an n-element data array
 * @param lenght - An unsigned integer as the size of the array
 *
 * @return Char with mean of array
 */

int find_mean(unsigned char *array, unsigned int lenght);

/**
 * @brief  Return the maximum of array
 *
 * This function takes as input the array and lenght of array and it will calculate the maximum of array.
 *
 * @param array -An unsigned char pointer to an n-element data array
 * @param lenght - An unsigned integer as the size of the array
 *
 * @return Char with maximum of array
 */

int find_maximum(unsigned char *array, unsigned int lenght);

/**
 * @brief  Return the minimum of array
 *
 * This function takes as input the array and lenght of array and it will calculate the minimum of array.
 *
 * @param array -An unsigned char pointer to an n-element data array
 * @param lenght - An unsigned integer as the size of the array
 *
 * @return Char with minimum of array
 */

int find_minimum(unsigned char *array, unsigned int lenght);

/**
 * @brief  Sorts the array from largest to smallest
 *
 * This function takes as input the array and lenght of array and it will sort the array from largest to smallest
 *
 * @param array -An unsigned char pointer to an n-element data array
 * @param lenght - An unsigned integer as the size of the array
 *
 * @return none
 */

void sort_array(unsigned char *array, unsigned int lenght);



#endif /* __STATS_H__ */
