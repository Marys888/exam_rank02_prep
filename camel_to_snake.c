int str_length(char *str)
{
    int length;

    length = 0;
    while(str[length])
    {
        length++;
        str++;
    }       
}

int is_upper(char c)
{
    if(c >= 'A' && c <= 'Z')
        return (1);
    return(0);
}

void camel_to_snake(char *str)
{
    int i;
    int j;
    char *result;
    int length;

    i = 0;
    j = 0;
    length = str_length(str);
    result = malloc(sizeof(char) * (length + 2));
    while(!is_upper(str[i]))
        result[j++] = str[i++];
    while(str[i])
    {
        if(is_upper(str[i]))
        {
            result[i] = '_';
            result[i+1] = str[i + 32];
        }
        i++;
    }

} 

put_str(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while(i < argc)
    {
        put_str(camel_to_snake{argv[i++][j++]});

    }
    return(0);
}