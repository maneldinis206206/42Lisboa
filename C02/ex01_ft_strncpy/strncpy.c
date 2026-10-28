#include <stdio.h> 
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i = 0;

    while(str[i] != '\0' && i < n)
    {
        dest[i] = str[i];
        i++;
    }
    while(i < n)
    {
        dest[i] = '\0';
    }
    return(dest);
}

int main(void)
{

}
