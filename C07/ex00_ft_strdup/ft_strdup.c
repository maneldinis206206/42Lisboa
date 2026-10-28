char	*ft_strdup(char *src)
{
    int i;
    char *dup;
    while(src[i])
    {
        i++;

    }
    dup = malloc(sizeof(char) * (i + 1));
    if(!dup)
        return(0);
    i = 0;
    while(src[i])
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0'
    return(dup);
}
