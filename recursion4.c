#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int power(int p, int t)
{
	if (t == 1)
		return (p);
	return (p * power(p, t - 1));
}

int main(void)
{
	int i = power(5, 2);
	printf("%d", i);
}