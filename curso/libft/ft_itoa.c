#include "libft.h"

static int ft_intlen(int n)
{
    int len;
    long temp;
    len = 0;
    temp = (long)n;

    if (temp <= 0)
    {
        len++;
        temp *= -1;
    }
    while (temp > 0)
    {
        len++;
        temp /= 10;
    }
    return (len);
}

char *ft_itoa(int n)
{
    int len;
    char *ptr;
    int temp;

    temp = (long)n;
    len = ft_intlen(n);
    ptr = (char *)malloc((len + 1) * sizeof(char));
    if (!ptr)
        return (NULL);
    ptr[len] = '\0';
    if (temp < 0)
        ptr[0] = '-';
    if (temp == 0)
        ptr[0] = '0';
    while (temp)
    {
        if(temp > 0)
            ptr[--len] = ((temp % 10) + 48);
        else
            ptr[--len] = (((temp % 10) * -1) + 48);
        temp /= 10;
    }
    return (ptr);
}

int main()
{
    int n = 2147483647;
    char *ptr = ft_itoa(n);

    printf("%s\n", ptr);
    free(ptr);
}