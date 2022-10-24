#include "lists.h"

void myFirstFun(void) __attribute__ ((constructor));

/**
  * myFirstFun - executes before main
  */

void myFirstFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
