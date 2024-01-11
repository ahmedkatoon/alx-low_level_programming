#include "main.h"
/**
 *factorial - function that returns the factorial of a given number
 *@n: the numper we want factorila for
 *Return: 0
 */
int factorial(int n)
{
int fact;
if (n < 0)
return (-1);
else if (n == 0)
return (1);

else
fact = n * factorial(n - 1);


return (fact);
}
