#include <stdio.h>
void *ft_bzero(void *s, size_t n)
{
    size_t i;
    unsigned char *p;

    p = (unsigned char *)s;
    i = 0;
    while(i < n)
    {
        p[i] = 0;
        i++;
    }
}

// int main(void)
// {
//     char str[] = "hello";

//     printf("Antes: %s\n", str);

//     ft_bzero(str, 3);

//     printf("Depois: %s\n", str);
// 	printf("Valores: %c%c%c%c%c\n",
//     str[0], str[1], str[2], str[3], str[4]);

//     return (0);
// }