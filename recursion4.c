#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int power(int p, int t)
{
	if (t == 0)
		return (1);
	return (p * power(p, t - 1));
}

int main(void)
{
	int i = power(5, 5);
	printf("%d", i);
}
