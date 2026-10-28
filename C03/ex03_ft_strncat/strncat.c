#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i;
    unsigned int j;

    j = 0;
    i = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    while (src[j] != '\0' && j < nb)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return(dest);

}

int main(void)
{
    char dest[29] = "Hello ";
    char src[] = "World!";
    printf("%s\n", src);
    printf("%s\n", dest);
    printf("%s\n", ft_strncat(dest, src, 0));
    return(0);
}
