#ifndef dog_h
#define dog_h

/**
 * struct dog - A dog structer containing its info.
 * @name: The dog’s name.
 * @age: The dog’s age.
 * @owner: The dog’s owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - The typedef for struct dog.
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *string_copy(char *dest, char *src);
int string_length(char *s);
void free_dog(dog_t *d);

#endif
