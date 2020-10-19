#include <stdio.h> /* Standard Input Output is only needed for this exercise, for the printf function */

/**
 * 3. Write a C program to check two given integers, and return true if one of them is 30 or if their sum is 30.
 * 
 * main - Main function, to call the other function with personalized parameters.
 * compare - You need another function, besides main, solves the problem explained upside.
 *
 * @n: integer parameter to compare
 * @y: integer parameter to compare
 *
 * Sample Expected Output : 1 1 0
 * 
 * Esteban Aguiar 2020 | W3RESOURCE.COM | C PROGRAMMING
 * 
 */

/** CODE STRUCTURE: FUNCTIONS ARE ALWAYS FIRST, WHILE MAIN IS ALWAYS THE LAST FUNCTION TO SHOW*/

int compare(int n, int y) /* Int type of function, since needs to return a integer number, and receive integer arguments */
{
if (n == 30 || y == 30) /* If one of the values is 30 */
{
return(1); /* Then return true (1) */
}
if (n + y == 30) /* If we take both parameters and sum them, and the result is 30, example: 15,15. also return true (1) */
{
return (1); /* Return true (1) */
}
else /* If both of the conditions are not true, then return false (0) */
{
    return(0);
}
}


void main(void) /* Void type of function, which doesnt have to return any value, and void parameters, we dont need any parameters */
{
    printf("%d\n",compare(30,15)); /* We check 30 in one parameter for testing, expected output : 1 */
    printf("%d\n",compare(15,15)); /* We check two parameters which the sum of them will result in 30, expected output : 1 */
    printf("%d\n",compare(10,10)); /* We check two numbers that are not 30, or the result of the sum, expected output : 0 */
}
