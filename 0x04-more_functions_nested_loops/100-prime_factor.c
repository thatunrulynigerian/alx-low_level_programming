#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of 612852475143
 *
 * Return: Always 0.
 */
int main(void)
{
    long int number = 612852475143;
    long int largest_factor = 0;
    long int i;

    /* Divide by 2 until the number is odd */
    while (number % 2 == 0)
    {
        largest_factor = 2;
        number /= 2;
    }

    /* Check for factors up to the square root of the remaining number */
    for (i = 3; i <= sqrt(number); i += 2)
    {
        while (number % i == 0)
        {
            largest_factor = i;
            number /= i;
        }
    }

    /* If the remaining number is greater than 2, it is a prime factor */
    if (number > 2)
    {
        largest_factor = number;
    }

    /* Print the largest prime factor followed by a new line */
    printf("%ld\n", largest_factor);

    return (0);
}
