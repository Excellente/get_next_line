#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int	len;
	int	index;
	char	*res;

	index = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	res = (char *)malloc((sizeof(char) * len) + 1);
	while (index < len)
	{
		if (*s1)
		{
			res[index] = *s1;
			s1++;
		}
		else if (*s2 && !(*s1))
		{
			res[index] = *s2;
			s2++;
		}
		index++;
	}
	res[index] = '\0';
	if (!res)
		return (NULL);
	return (res);
}
