#ifndef DOG_H_
#define DOG_H_
/**
 * struct dog - creates a dog struct
 * @name: name of the dog
 * @age: the dog age
 * @owner: the owner of the dog
 *
 * Desc: first struct
 */
struct dog
{
	char *name;
	float age;
	char *owner;

}dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
