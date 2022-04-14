#include <stdio.h>
/**
 * main - print Fuzz for int divisible by 3 and Buzz by 5
 *
 * Return: int
 */
int main(void)
{
int i;
for (i = 1; 1 <= 100; i++)
{
if (i % 3 == 0 && i % 5 != 0)
{
printf("Fizz");
}
else if (i % 3 != 0 && i % 5 == 0)
{
printf("Buzz");
}
else if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}
else
{
printf("%d", i);
}
if (i != 100)
putchar(' ');
else
putchar('\n');
}
return (0);
}
