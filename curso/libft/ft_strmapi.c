#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    int len;
    char *ptr;

    if (!s)
        return (NULL);
    len = ft_strlen(s);
    ptr = (char *)malloc((len + 1) * (sizeof(char)));
    if (!ptr)
        return (NULL);
    i = -1;
    while (s[++i])
        ptr[i] = f(i, ptr[i]);
    ptr[i] = '\0';
    return(ptr);
}