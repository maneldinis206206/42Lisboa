#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}


// #include <stdio.h>

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