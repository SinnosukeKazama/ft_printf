#include <stdio.h>

size_t	index_function(char c)
{
	char	*list_functions = "123";
	while (*list_funtions != '\0')
	{
		if (*list_functions == c)
			return i;
	}
}

void	print(void)
{
	void (*f[])(char) = {f1, f2, f3};
	f[index_function('1')];
}
