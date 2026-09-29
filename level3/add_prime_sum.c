
#include <unistd.h>
#include <stdlib.h>

int is_prime(int n)
{
    int i;

    i = 2;
    if(n <= 1)
        return(0);
    while(i * i <= n)
    {
        if(n % i == 0)
            return(0);
        i++;
    }
    return(1);
}

int add_prime_sum(int n)
{
    int sum;
    int i;

    sum = 0;
    i = 2;
    if (n <= 1)
        return (0);
    while(i <= n)
    {
        if (is_prime(i))
        {
            sum += i;
        }   
        i++;
    }
    return(sum);
} 

void put_nbr(int n)
{
    if (n > 9)
        put_nbr(n / 10);
    c = n % 10 + '0';
    write(1, &c, 1);
}

int ft_atoi(char *str)
{
    int i;
    int result;

    i = 0;
    result = 0;
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (result);
}

int main(int argc, char **argv)
{
    int n;
    int sum;

    if(argc != 2)
    {
        write(1, "0\n", 2);
        exit(0);
    }
    n = ft_atoi(argv[1]);
    if(n <= 0)
    {
        write(1, "0\n", 2);
        exit(0);
    }
    sum = add_prime_sum(n);
    put_nbr(sum);
    write(1, "\n", 1);
    return(0);
}