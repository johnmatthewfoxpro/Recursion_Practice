#include <unistd.h>
#include <stdio.h>

void	printnumbers(int n)
{
	int i = n;
	if (n == 0)
	{
		write(1, "0", 1);
		write(1, "\n", 1);
		return ;
	}
	printnumbers(n - 1);
	i += '0';
	write(1, &i, 1);
	write(1, "\n", 1);
	return ;
}

int main(void)
{
	printnumbers(5);
}