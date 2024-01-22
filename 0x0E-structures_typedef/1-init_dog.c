#include "dog.h"
#include <stdio.h>
/**
 *init_dog - function initialize a variable of type struct dog
 *@d: pointer to struct
 *@name: name of the struct
 *@age: age of the struct
 *@owner: owner of the struct
 *Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
}
