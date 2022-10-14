
/**
  * print_name - A function that prints a name
  * @name: name to be printed
  * @f: char function pointer
  */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
