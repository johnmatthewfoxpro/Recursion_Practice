#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int recursive_strlen(char *string)
{
	char *s = string;
	int i = 0;
	if (*s == '\0')
		return (0);
	else
		i += 1;
	return (i + recursive_strlen(&string[i]));
}

int main(void)
{
	int i = recursive_strlen("Hello");
	printf("%d", i);
}