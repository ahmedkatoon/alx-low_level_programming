#include <stdio.h>
#include <stdlib.h>
/**
 *main - function that multiplies two numbers.
 *@argc: argument counter
 *@argv: argument vctor
 *
 *Return: 0
 *
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
int n1 = atoi(argv[1]);
int n2 = atoi(argv[2]);
printf("%d\n", n1 * n2);
}
return (0);

}
