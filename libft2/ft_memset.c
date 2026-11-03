#include "libft.h"

#include <stdio.h>
#include <stddef.h>

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *p;
    size_t i;

    p = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        p[i] = (unsigned char)c;
        i++;
    }
    return (s);
}

// int main(void)
// {
//     char str[] = "hello";

//     ft_memset(str, 300, 3);

//     printf("%s\n", str);
// 	printf("Como números: %d %d %d %d %d\n", str[0], str[1], str[2], str[3], str[4]);

//     return (0);
// }