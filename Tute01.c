/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main()
{
  float Mark1,Mark2;
  float total,average;

  printf("Enter the mark of subject1 :");
  scanf("%f",&Mark1);

  printf("Enter the mark of subject2 :");
  scanf("%f",&Mark2);

  total=Mark1+Mark2;

  average=total/2.0;

  printf("Average is = %.2f",average);
  
  
  return 0;
}

