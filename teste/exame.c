/*
#include <unistd.h>
void print_even(char *str)
{
    int i;
    i = 0;

    while (str[i] != '\0')
    {
        if(i % 2 == 0)
        {
            write(1, &str[i], 1);
        }
        i++;
    }
    write(1, "\n", 1);
}

int main(void)
{
    print_even("abababab", "ababab");
    return(0);
}
*/

#include <unistd.h>

void	ft_even(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_even(argv[1]);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
