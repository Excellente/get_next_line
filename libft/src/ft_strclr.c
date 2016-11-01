#include "libft.h"

void	ft_strclr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
		str[index++] = '\0';
}
