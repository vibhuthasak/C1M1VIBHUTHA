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
 * @file stat.c
 * @brief find median,mean,max,min of array
 *
 * Functions are declared on stat.h
 *
 * @author Vibhutha Kumarage
 * @date 10/06/2017
 *
 */

#include <stdio.h>
#include "stats.h"
#include <stdbool.h>
#include <math.h>
#define SIZE 40

void print_array(int list[]) {
   int i;
   printf("[");
   for(i = 0; i < SIZE; i++) {
      printf("%d ",list[i]);
   }
   printf("]\n");
}


void sort_array(int list[]) {
   //USING BUBBLE SORT DECENDING ORDER
   int temp;
   int i,j;

   bool swapped = false;
   for(i = 0; i < SIZE-1; i++) {
      swapped = false;
      for(j = 0; j < SIZE-1-i; j++) {
         if(list[j] < list[j+1]) {
            temp = list[j];
            list[j] = list[j+1];
            list[j+1] = temp;

            swapped = true;
         }
      }
      if(!swapped) {
         break;
      }
   }
}


float find_median(int array[]){
    float median_value;
    int half_size = roundf(SIZE/2);
    if((SIZE%2)== 0){
            median_value = array[half_size-1]+ array[half_size];
            return (median_value/2);
    }
    else{
            return array[half_size];
    }
}


float find_mean(int array[]){
    int array_sum = 0;
    for(int i=0; i < SIZE; i++){
        array_sum += array[i];
    }
    float mean_v = (float)array_sum/SIZE;
    return mean_v;
}


int find_maximum(int array[]){
    return array[SIZE-1];
}


int find_minimum(int array[]){
    return array[0];
}


void print_statistics(int array[]){

   float median_v = find_median(array);
   float mean = find_mean(array);
   int maxi = find_maximum(array);
   int mini = find_minimum(array);
   print_array(array);
   printf("\nMedian_val is %f",median_v);
   printf("\nMean_val is %f",mean);
   printf("\nMax_val is %d",maxi);
   printf("\nMin_val is %d \n",mini);
}

void main() {
   int int_array[SIZE];
   unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
   //Convert the char array into int array
   for( int i=0;i<SIZE;i++){
    int_array[i] = test[i];
   }

   //Sort the array [Bubble sort is used]
   sort_array(int_array);
   print_statistics(int_array);

}


