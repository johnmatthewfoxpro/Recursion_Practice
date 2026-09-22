#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int recursive_strlen(char *string)
{
	int i = 0;
	if (*string == '\0')
		return (0);
	else
		i += 1;
	return (i + recursive_strlen(&string[i]));
}

void recursive_permut(char *str, char *solution, int length, int position, int *used)
{
	int i;

	i = 0;
	if (position == length)
	{
		printf("%s\n", solution);
		return ;
	}
	while (str[i])
	{
		if (used[i] == 0)
		{
			solution[position] = str[i];
			used[i] = 1;
			recursive_permut(str, solution, length, position + 1, used);
			used[i] = 0;
		}
		i++;
	}
}

void permutations(char *str)
{
	int		position;
	int		length;
	int		*used;
	char	*solution;

	position = 0;
	length = recursive_strlen(str);
	// used = calloc(length, sizeof(int));
	used = malloc(length * sizeof(int));
	if (!used)
		return ;
	while (position < length)
	{
		used[position] = 0;
		position++;
	}
	position = 0;
	solution = malloc((length + 1) * sizeof(char));
	if (!solution)
		return ;
	solution[length] = '\0';
	recursive_permut(str, solution, length, position, used);
	free(used);
	free(solution);
}

int main(void)
{
	permutations("hello");
	return (0);
}
