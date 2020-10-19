#include <stdio.h> /* Standard Input Output is only needed for this exercise, for the printf function */

/**
 * 2. Write a C program to get the absolute difference between n and 51. If n is greater than 51 return triple the absolute difference.
 *
 * main - Main function, to call the other function with personalized parameters.
 * absolute - You need another function, besides main, solves the problem explained upside.
 *
 * @n: integer parameter for getting the absolute differente between the (n) chosen number and 51.
 *
 * Sample Expected Output : 6 21 0
 * 
 * Esteban Aguiar 2020 | W3RESOURCE.COM | C PROGRAMMING
 * 
 */

/** CODE STRUCTURE: FUNCTIONS ARE ALWAYS FIRST, WHILE MAIN IS ALWAYS THE LAST FUNCTION TO SHOW*/

int absolute(int n) /* Int type of function, since needs to return a integer number, and receive integer arguments */
{
if (n > 51) /* If n is bigger than 51, multiply by 3 the absolute difference */
{

    n = (n-51); /* To avoid occuping memory, we change the same variable, to n-51. We can also do a int x = 51 */
                /* Setting the variable to the number we want to get the absolute difference */
                /* Absolute diference is the difference between two numbers (substraction) in absolute values */
return(-n*-3);  /* We do -n to get the absolute value (Law of signs: sum x substraction = substraction), 
                /* we change the value to a positive value, we do the same with 3, making them a positive value in every case. (Absolute value) */

}

else /* If its not bigger than 51, get the absolute value of n number minus 51 */

{
    n = (n-51); /* As said before, we asign the value of n-51 */
    return(-n); /*Then we, thanks to law of signs change the return value to a positive (absolute) value */
}
}


void main(void) /* Void type of function, which doesnt have to return any value, and void parameters, we dont need any parameters */
{
    printf("%d",absolute(53));    /* We check 53 to get the desired outpùt (6), because difference between 53 and 51 is 2, 2 multiplied by 3 = 6 */
    printf("\n%d",absolute(30));  /* We check 30 to get the desired outpùt (21), because difference between 30 and 51 is 21*/
    printf("\n%d",absolute(51));  /* We check 51 to get the desired outpùt (0), because difference between 51 and 51 is 0*/
}
