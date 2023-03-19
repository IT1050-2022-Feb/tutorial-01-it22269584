/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   
   int num1, num2, sum;
   float average;
  
   printf("Enter the mark : ");
   scanf("%d" , &num1);
   
   printf("Enter the mark : ");
   scanf("%d" , &num2);
   
   sum = num1 + num2;
   average = sum / 2;
   
   printf("The average is : %.2f" , average);
   
  return 0;
}

