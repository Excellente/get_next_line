#ifndef LIBFT_H
#define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int	ft_strlen(char const *s);
char	*ft_strcpy(char *d, char const *s);
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_putchar(int c);
void	ft_putnbr(int nbr);
void	ft_cpyfrm(char *d, char const *s, int i);

#endif
