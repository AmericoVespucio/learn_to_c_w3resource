#include <stdio.h> /* Standard Input Output is only needed for this exercise, for the printf function */

/**
 * 1. Write a C program to compute the sum of the two given integer values. If the two values are the same, then return triple their sum.
 *
 * main - Main function, to call the other function with personalized parameters.
 * sum - You need another function, besides main to et
 * @x: First integer parameter for sum
 * @y: Second integer parameter for sum
 *
 * Sample Expected Output : 3 12
 * 
 * Esteban Aguiar 2020 | W3RESOURCE.COM | C PROGRAMMING
 * 
 */

/** CODE STRUCTURE: FUNCTIONS ARE ALWAYS FIRST, WHILE MAIN IS ALWAYS THE LAST FUNCTION TO SHOW*/

int sum(int x, int y) /* Int type of function, since needs to return a integer number, and receive integer arguments */
{
if (x == y)  /* If the two values are the same */
{
return((x+y)*3); /* then return triple their sum. */ 
}
else /* If the two values are NOT the same, then */
{
return(x+y); /* Return the sum of the two values */
}
}

void main(void)
{
printf("%d\n", sum(1,2)); /* Since expected output is 3, 1+2 will be the necessary sum to get */ 
printf("%d\n", sum(2,2)); /* Since expected output is 12, 2+2 is 4, by knowing the condition that if the two values are the same 
                             then return the sum result multiplied by 3 will be 4*3 */
}
