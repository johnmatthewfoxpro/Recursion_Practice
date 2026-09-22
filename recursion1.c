#include <unistd.h>
#include <stdio.h>

void	printnumbers(int n)
{
	if (n == 0)
		return ;
	printnumbers(n - 1);
	n += '0';
	write(1, &n, 1);
	write(1, "\n", 1);
	return ;
}

int main(void)
{
	printnumbers(5);
}
