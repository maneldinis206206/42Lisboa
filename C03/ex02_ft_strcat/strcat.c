#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    j = 0;
    i = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    while (src[j] != '\0')
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
    char dest[20] = "Hello ";
    char src[] = "World!";
    printf("%s\n", dest);
    printf("%s\n", src);
    printf("%s\n", ft_strcat(dest, src));
    return(0);
}