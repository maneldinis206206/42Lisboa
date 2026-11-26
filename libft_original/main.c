#include "libft.h"


static char remove_number(unsigned int i, char c)
{
    (void)i;
    if(c >= '0' && c <= '9')
        return('X');
    return(c);
}

int main(int argc, char **argv)
{
    char *word;
    char *new_word;
    if (argc != 2)
        return(0);

    word = argv[1];
    if (argc != 2)
        return(1);
   new_word = ft_strmapi(word, remove_number);
    ft_putstr_fd(word, 1);
    ft_putchar_fd('\n', 1);
    ft_putstr_fd(new_word, 1);
    return(0);
}