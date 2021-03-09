#ifndef DOG_H
#define DOG_H
/**
 *struct dog - name struct
 *@name: name of doggy
 *@age: age of doggy
 *@owner: owner of doggy
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef dog dog_t;
#endif
