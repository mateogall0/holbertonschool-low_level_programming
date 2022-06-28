#ifndef MAIN_H
#define MAIN_H
/**
 * struct dog - dog object
 * @name: string
 * @age: float
 * @owner: string
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * struct dog_t - dog :)
 * @name: string
 * @age: float
 * @owner: string
 */
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;
int main(void);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif