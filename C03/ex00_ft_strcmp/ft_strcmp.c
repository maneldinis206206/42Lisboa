#include <stdio.h>
int ft_strcmp(char *s1, char *s2)
{
    int i;
    int value;
    value = 0;
    i = 0;

    while (s1[i] == s2[i])
    {
        i++;
    }
    if (s1[i] != s2[i])
    {
        value = s1[i] - s2[i];
    }
    return(value);
}

int main(void)
{
    char s1[] = "babaa";
    char s2[] = "aaaaa";
    printf("%s\n", s1);
    printf("%s\n", s2);
    printf("%d\n", ft_strcmp(s1, s2));
    return(0);
}

