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
}
dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
