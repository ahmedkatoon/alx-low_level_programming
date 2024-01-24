#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *op_add - add two integers
 *@a: first num
 *@b: second num
 *Return: add of two integers
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
*op_sub - sub two integers
*@a: first num
*@b: second num
*Return: sub of two integers
*/
int op_sub(int a, int b)
{
return (a - b);
}
/**
 *op_mul - mul two integers
 *@a: first int
 *@b: second int
 *Return: mul of two integers
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 *op_div - div two integers
 *@a: first number
* @b: second number
*
* Return: result
*/
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
* op_mod - function mods two numbers
* @a: first number
* @b: second number
*
* Return: result
*/
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
