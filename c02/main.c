#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	int i;
	int *iptr;
	int memory;

	i = 0;
	iptr = &i;
	memory = iptr;
	printf("%d", memory);
	return (0);
}