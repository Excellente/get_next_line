#ifndef LIBFT_H
#define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int	ft_strlen(char const *str);
char	*ft_strdup(char const *s);
char	*ft_strcpy(char *d, char const *src);
char	*ft_strjoin(char const *s1, char const *s2);
void	ft_putnbr(int n);
void	ft_putchar(int c);
void	ft_strclr(char *s);

#endif
