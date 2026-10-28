#include <stdio.h>
int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;
    i = 0;
    int value = 0;

    while (s1[i] == s2[i] && i < n)
    {
        i++;
    }
    if(s1[i] != s2[i])
    {
        value = s1[i] - s2[i];
    }
    return(value);
}

int main (void)
{
    // char s1[] = "aabaa";
    // char s2[] = "aaaaa";
    // printf("%d\n", ft_strncmp(s1, s2, 1));
    printf("%d\n", ft_strncmp("aabaa", "aaaaa", 2));
    return(0);
}
