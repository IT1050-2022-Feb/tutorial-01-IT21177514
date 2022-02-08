/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int subject1;
	int subject2;
	int total;
	
	float average;
	
	//initialization phase
	total=0;
	average=0;
	
	printf("\n\nEnter marks of subject No-1: ");
	scanf("%d",&subject1);
	
	printf("\n\nEnter marks of subject No-2: ");
	scanf("%d",&subject2);
	
	//processing phase
	total=subject1+subject2;
	
	average=total/2.0;
	
	//termination phase
	printf("\n\nAverage of marks: %0.2f",average);
	
	
  
  return 0;
}

