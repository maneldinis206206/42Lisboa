int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    while (i < n && s1[i] == s2[i])
    {
        if (s1[i] == '\0')
            return (0);
        i++;
    }
    if (i == n)
        return (0);
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
int main (void)
{
    // char s1[] = "aabaa";
    // char s2[] = "aaaaa";
    // printf("%d\n", ft_strncmp(s1, s2, 1));
    printf("%d\n", ft_strncmp("aabaa", "aaaaa", 2));
    return(0);
}
