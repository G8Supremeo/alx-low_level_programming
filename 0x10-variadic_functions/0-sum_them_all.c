/**
  * sum_them_all - A function that returns the sum of all its parameters.
  * @n: is the first argument of this function
  * Return: 0 if n == 0 else 1
  */

int sum_them_all(const unsigned int n, ...)
{
va_list ap;
int i, sum = 0;

va_start(va_list ap, n);
for (i = 0; i < n; i++)
{
sum += va_arg(ap, int);
}
va_end (ap);
return (sum);
}
