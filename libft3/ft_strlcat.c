size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;

    j = 0;
    i = 0;
    while ((dst[i] != '\0') && i < size)
        i++;

    while ((src[j] != '\0') && (j + i + 1 < size))
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return(size)
}