#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *main - the main function
 *@argc: argument counter
 *@argv: argument vector
 *Return: int
 */
int main(int argc, char *argv[])
{
int result;
int (*fun)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}


fun = get_op_func(argv[2]);

if (fun == NULL)
{
printf("Error\n");
exit(99);
}

result = fun(atoi(argv[1]), atoi(argv[3]));
printf("%d\n", result);

return (0);

}
