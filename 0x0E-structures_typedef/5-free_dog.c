#include <stdlib.h>
#include "dog.h"
/**
  * free_dog - frees dogs
  * @p: the dog to be freed
  */
void free_dog(dog_t *p)
{
	if (p == NULL)
		return;
	free(p->owner);
	free(p->name);
	free(p);
}
