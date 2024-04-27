#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    int i;
    char *temp;

    temp = (char *)s;
    i = -1;
    while (s[++i])
        f(i, temp[i]);
}