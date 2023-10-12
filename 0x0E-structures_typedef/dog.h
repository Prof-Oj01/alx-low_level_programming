#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - struct that creates a dog's information
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Desc: first struct in alx
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);


#endif