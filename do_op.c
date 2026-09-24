int do_op(char *str1, char *str2, char *str3)
{
    int result;
    int first_num = atoi(str1);
    int secont_number = atoi(str3);

    result = 0;
    switch(*str2) {
        case '+':
            result = first_num + secont_number;
            break;
        case '-':
            result = first_num - secont_number;
            break;
        case '*':
            result = first_num * secont_number;
            break;
        case '/':
            result = first_num / secont_number;
            break;
    }
    return result;
}
void put_nbr(int nbr)
{
    char c;

    if(nbr > 9)
        put_nbr(nbr / 10);
    c = nbr % 10 + '0';
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    int i;
    int j;
    int number;

    i = 1;
    j = 0;
    number = 0;
    while(i < argc)
    {
        number = do_op(argv[i][j], argv[i+1][j], argv[i + 2][j]);
        put_nbr(number);
    }
    return (0);
}