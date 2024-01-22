#include "dog.h"
#include <string.h>
#include <stdlib.h>
/**
 *new_dog -  function that creates a new dog.
 *@name: nmae of the struct
 *@age: age of the struct
 *@owner: owner of the struct
 *
 *Return: 0
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int len1, len2;
dog_t *new_dog;
len1 = strlen(name);
len2 = strlen(owner);

new_dog = (dog_t *)malloc(sizeof(dog_t));
if (new_dog == NULL)
{
return (NULL);
}

new_dog->name = malloc(sizeof(char) * (len1 + 1));
new_dog->owner = malloc(sizeof(char) * (len2 + 1));
if (new_dog->name == NULL || new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog->owner);
free(new_dog);
return (NULL);
}


new_dog->name = strdup(name);
new_dog->age = age;
new_dog->owner = strdup(owner);

return (new_dog);
free(new_dog);
}
