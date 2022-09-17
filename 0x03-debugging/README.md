#**DEBUGGING**

Debugging is the process of finding and fixing errors in software that prevents it from running correctly. As you become a more advanced programmer and an industry engineer, you will learn how to use debugging tools such as gdb or built-in tools that IDEs have. However, it’s important to understand the concepts and processes of debugging manually.

**0. Multiple mains mandatory**
In most projects, we often give you only one main file to test with. For example, this main file is a test for a postitive_or_negative() function similar to the one you worked with in an earlier C project:
    carrie@ubuntu:/debugging$ cat main.c
    #include "main.h"

    /**
    * main - tests function that prints if integer is positive or negative
    * Return: 0
    */

    int main(void)
    {
           int i;

           i = 98;
           positive_or_negative(i);

            return (0);
    }
Based on the main.c file above, create a file named 0-main.c. This file must test that the function positive_or_negative() gives the correct output when given a case of 0. You are not coding the solution / function, you’re just testing it! However, you can adapt your function from 0x01. C - Variables, if, else, while - Task #0 to compile with this main file to test locally. You only need to upload 0-main.c and main.h for this task. We will provide our own positive_or_negative() function.
You are not allowed to add or remove lines of code, you may change only one line in this task.

**1. Like, comment, subscribe**
Copy this main file. Comment out (don’t delete it!) the part of the code that is causing the output to go into an infinite loop. Don’t add or remove any lines of code, as we will be checking your line count. You are only allowed to comment out existing code. You do not have to compile with -Wall -Werror -Wextra -pedantic for this task.

    cat 1-main.c
    #include <stdio.h>

    /**
    * main - causes an infinite loop
    * Return: 0
    */
    int main(void)
        {
            int i;
            
            printf("Infinite loop incoming :(\n");
            
            i = 0;
            
            while (i < 10)
            {
            putchar(i);
            }
            printf("Infinite loop avoided! \\o/\n");
            return (0);
          }

**2. 0 > 972?**
This program prints the largest of three integers.
    cat 2-main.c
    #include <stdio.h>
    #include "main.h"

    /**
    * main - prints the largest of 3 integers
    * Return: 0
    */

    int main(void)
    {
            int a, b, c;
            int largest;

            a = 972;
            b = -98;
            c = 0;

            largest = largest_number(a, b, c);

            printf("%d is the largest number\n", largest);

            return (0);
    } 
        
        2-largest_number.c
        #include "main.h"

        /**
         * largest_number - returns the largest of 3 numbers
         * @a: first integer
         * @b: second integer
         * @c: third integer
         * Return: largest number
         */

        int largest_number(int a, int b, int c)
        {
            int largest;

            if (a > b && b > c)
            {
                largest = a;
            }
            else if (b > a && a > c)
            {
                largest = b;
            }
            else
            {
                largest = c;
            }

            return (largest);
        }
        
**3. Leap year**
This program converts a date to the day of year and determines how many days are left in the year, taking leap year into consideration.
Fix the print_remaining_days() function so that the output works correctly for all dates and all leap years.
    . Line count will not be checked for this task.
    . You can assume that all test cases have valid months (i.e. the value of month will never be less than 1 or greater than 12) and valid days (i.e. the value of day will never be less than 1 or greater than 31).
     . You can assume that all test cases have valid month/day combinations (i.e. there will never be a June 31st or November 31st, etc.), but not all month/day/year combinations are valid (i.e. February 29, 1991 or February 29, 2427).
