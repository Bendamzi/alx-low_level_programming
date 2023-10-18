#include <stdio.h>

/**
 *main - Entry point of the program
 *
 * This is the main function that serves as the entry point for your program.
 * It performs specific task and returns an exit status to the OS.
 *
 * Return: 0 on success, non-zero on error
 */

int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
*(p + 5) = 98;
  /* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}

