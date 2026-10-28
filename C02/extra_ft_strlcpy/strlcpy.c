#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int len = 0;
    unsigned int i;
    
    i = 0;

    while (src[len] != '\0')
    {
        len++;
    }
    if (size == 0)
    {
        return(len);
    }
    while (src[i] != '\0' && i < size - 1)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(len);

}

int main(void)
{
    char dest[20];
    char src[] = "hello";
    // talvez mude para %u\n
    printf("%d\n", ft_strlcpy(dest, src, 4));
    printf("%s\n", dest);
    return(0);
}