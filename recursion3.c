#include <stdio.h>
#include <unistd.h>

int factorialnumbers(int n)
{
	if (n == 1)
		return (1);
	return (n * factorialnumbers(n - 1));
}

int main(void)
{
	int n =	factorialnumbers(5);
	printf("%d\n", n);
}