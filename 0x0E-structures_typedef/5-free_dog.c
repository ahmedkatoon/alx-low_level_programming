#include "dog.h"
#include <stdlib.h>
/**
 *free_dog - fun free dogs
 *@d: pointer to struct
 *Return: 0
 */
void free_dog(dog_t *d)
{
if (d == NULL)
return;

free(d->name);
free(d->owner);
free(d);
}
