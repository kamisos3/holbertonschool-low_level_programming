#ifndef MAIN
#define MAIN

/**
 * struct dog - Structure of a dog
 * @name:string with dogs name
 * @age: floating point number of dogs age
 * @owner:points to owner
 *
 * Description:information of a dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif
