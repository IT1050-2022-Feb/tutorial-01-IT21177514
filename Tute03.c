/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {

  int n;
	int number;
	int total;
	
	//initialization phase
	number=1;
	total=0;
	
	printf("\n\nEnter value(integer) of \"n\": ");
	scanf("%d",&n);
	
	//processing phase
	
	while(number!=n+1){
		
		total=total+number;
		
		number++;
		
	}//end while loop
	
	//termination phase
	
	printf("\n\nSum of the numbers from 1 to %d: %d",n,total);
	
	
  
  return 0;
}

