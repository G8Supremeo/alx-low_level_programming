#ifndef _DOG_H_
#define _DOG_H_



/**
  * struct dog - dog info
  * @name: name of dog
  * @owner: owner of dog
  * @age: age of dog
  *
  */

struct dog
{
	char *name;
	char *owner;
	float age;
};




void init_dog(struct dog *d, char *name, float age, char *owner);



#endif /* _DOG_H_ */
