#include <stdio.h>
#include <unistd.h>

int search(int *arr, int length, int val)
{
	int i = length - 1;
	if (length == 0)
		return (-1);
	if (arr[i] == val)
		return (1);
	return (search(arr, length - 1, val));
}

int main(void)
{
	int i;
	int n[5] = {1, 0, 7, 8, 2};

	i = search(n, 5, 0
	);
	printf("%d", i);
}