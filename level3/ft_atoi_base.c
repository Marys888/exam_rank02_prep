int get_digit(char c, int base)
{
    int value;

    if (c >= '0' && c <= '9')
        value = c - '0';
    else if (c  >= 'a' && c <= 'f')
        value = c - 'a' + 10;
    else if (c >= 'A' && c <= 'F')
        value  = c - 'A' + 10;
    else 
    {
        return (-1);
    }

    if (value < base)
        return (value);
    return(-1);
}


int	ft_atoi_base(const char *str, int str_base)
{
    int i;
    int sign;
    int digit;
    int result;

    i = 0;
    sign = 1;
    result = 0;
    if (str_base < 2 || str_base > 16)
        return (0);
    if (str[i] == '-')
    {
        sign *= -1;
        i++;
    }
    else if (str[i] == '+')
        i++;
    while (str[i])
    {
        digit = get_digit(str[i], str_base);
        if (digit == -1)
            break;
        result = result * str_base + digit;
        i++;
    }
    return(result * sign);

}