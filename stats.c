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
 * @file stats.c
 * @brief File that implements the statistical analysis of the dataset
 *
 * This file contains the functions and variables that read the data, print the data, print the statistical 
 *	analysis (maximum, minimum, mean and median) and sort the data.
 *
 * @author Antonio Gomes
 * @date March 29, 2020
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)



/* Add other Implementation File Code Here */
void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

 
  printf("Input Array:\n");
  print_array(test, SIZE);
  
  printf("\nStatistical Analysis:\n");
  print_statistics(test); 

  printf("\nSorted Array:\n");
  print_array(test, SIZE);
 
}

void print_array(unsigned char *array, unsigned int length){
  
  for (unsigned int i = 0; i<length; i++){
    printf("%d ",array[i]);
  }
  
}

void print_statistics(unsigned char *array){
  unsigned char median_value = 0;  
  unsigned char mean_value = 0;
  unsigned char maximum_value = 0;
  unsigned char minimum_value = 0;
  
  median_value = find_median(array, SIZE);
  mean_value = find_mean(array, SIZE);
  maximum_value = find_maximum(array, SIZE);  
  minimum_value = find_minimum(array, SIZE);
  
  printf("Median value is: %d", median_value);
  printf("\nMean value is: %d", mean_value);
  printf("\nMaximum value is: %d", maximum_value);
  printf("\nMinimum value is: %d", minimum_value);

}


int find_median(unsigned char *array, unsigned int length)
{
  sort_array(array, length);
  unsigned int median_value = 0;
  if(length%2 == 0)
  {
    median_value = (array[(length-1)/2]+array[length/2])/2; 
  }
  else
  {
    median_value = array[length/2]; 
  }
  return median_value; 
}

int find_mean(unsigned char *array, unsigned int length)
{
  unsigned int mean_value = 0;
  for (unsigned int i = 0; i<length; i++)
  {
    mean_value += array[i];  
  }
  mean_value /= length;  
  return mean_value;
}

int find_maximum(unsigned char *array, unsigned int length)
{
  unsigned char maximum_value = 0; 
  for (unsigned int i = 0; i<length; i++)
  {
    if(array[i]>maximum_value)
    {
      maximum_value = array[i];
    }
  }
  return maximum_value;
}

int find_minimum(unsigned char *array, unsigned int length)
{
  unsigned char minimum_value = array[0]; 
  for (unsigned int i = 1; i<length; i++)
  {
    if(array[i]<minimum_value)
    {
      minimum_value = array[i];
    }
  }
  return minimum_value;
}

void sort_array(unsigned char *array, unsigned int length)
{
  unsigned char temp;   
  for (unsigned int i = 0; i<length; i++)
  {
    for(unsigned int j = i+1; j<length; j++)
    {
      if(array[i]<array[j])
      {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }
}
