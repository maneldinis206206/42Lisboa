#include <stdio.h>
int ft_atoi(char *str)
{
    int i;
    i = 0;
    int sign = 1;
    int result = 0;


    while(str[i] != '\0')
    {
        while(str[i] == '+' || str[i] == '-')
        {
            if(str[i] == '-')
            {
                sign *= -1;
            }
            i++;

        }
        while (str[i] >= '0' && str[i] <= '9')
        {
            result = result * 10 + (str[i] - '0');
            i++;
        }

        if((str[i] < '0' || str[i] > '9'))
        {
            return(result * sign);
        }

        i++;
    }
    return(result * sign);
}

int main(void)
{
    printf("%d\n", ft_atoi("   123 45"));
    return(0);
}