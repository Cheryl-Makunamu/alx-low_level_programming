#ifndef DOG_H
#define DOG_H
/**
 * struct dog - description of a dog
 * @name: its name
 * @age: its age
 * @owner: its owner
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - type of def struct of the dog
 *
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
