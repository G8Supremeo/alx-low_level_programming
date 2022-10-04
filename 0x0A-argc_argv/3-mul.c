#include <stdio.h>
#include <stdlib.h>

/**   * main - a program that prints all arguments it receives.   

      5   * All arguments should be printed, including the first one  

        6   * only print one argument per line, ending with a new line  

	  7   *                                                           

	    8   * @argc: number of arguments passed into the program        

	      9   * @argv: array which holds the names of all the arguments   

	       10   * passed into the program                                   

	        11   *                                                           

		 12   * Return: Always 0                                          

		  13   */   

int main (int argc, char *argv[])
{
	int i;
	int Mul = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			Mul *= atoi(argv[i]);
		}
		printf("%d\n", Mul);
	}
	else
	{
		printf("Error\n");
	}
	
	return (1);
}
