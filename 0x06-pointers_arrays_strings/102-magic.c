#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/**
	 * write your line of code here
	 * Remember 
	 * you are not allowed to yse a
	 * you are not allowed to modify p
	 * only one statement
	 * youre not aloowed to code anytrhing else
	 */
	*(p + 5) = 98;
	/*..... sp this prints 98\n*/
	printf("a[2] = %d\n", a[2]);
	return (0);
}