#include "main.h"
/**
 *is_prime_number - function that returns a prime number
 *@n: the prime number
 *Return: 0
 *
 *
 */
int is_prime_number(int n)
{
if (n == 1)
return (0);
else if (n < 0)
return (0);
n = 4;
if (is_prime_number(n % 2 == 0 || n % 3 == 0))
return (0);
else
return (1);
is_prime_number(n + 1);
}
