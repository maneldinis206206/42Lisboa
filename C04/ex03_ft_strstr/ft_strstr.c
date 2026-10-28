char    *ft_strstr(char *str, char *to_find)
{
    int i;
    int p;
    int ipt;

    i = 0;
    if (to_find[0] == '\0')
        return (str);
    while (str[i] != '\0')
    {
        ipt = i;
        p = 0;
        while (str[i] == to_find[p] && to_find[p] != '\0')
        {
            i++;
            p++;
        }
        if (to_find[p] == '\0')
            return (&str[ipt]);
        i = ipt + 1;
    }
    return (0);
}

#include <stdio.h>

int main(void)
{
    char    str[] = "uma banana alimenta muita gente";
    char    to_find[] = "a";
    char    *result;

    result = ft_strstr(str, to_find);
    if (result)
        printf("%s\n", result);
    else
        printf("Nada Encontrado\n");
}