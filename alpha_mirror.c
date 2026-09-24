int str_length(char *str)
{
    int length;

    length = 0;
    while(*str)
    {
        length++;
        str++;
    }
}

void    alpha_mirror_helper(char *str)
{
    char    *alph_lower = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char    *alph_upper = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'l', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int i;
    int j;
    int mid;
    int k;

    i = 0;
    j = str_length(alph_lower) - 1;
    mid = str_length(alph_lower) / 2;
    k = 0; 
    while(k != mid && *str)
    {
        if (*str >= 'a' && *str <= 'z')
        {
            while(alph_lower[i])
            {
                alph_lower[i] = alph_lower[j];
                i++;
                j--;
            }
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            while(alph_lower[i])
            {
                alph_upper[i] = alph_upper[j];
                i++;
                j--;
            }
        }
        k++;
    }
}

void put_str(char *str)
{
    while(*str)
    {
        write(1, &*str, 1);
        str++;
    }
}

char *alpha_mirror(char *str)
{
    alpha_mirror_helper(str);
}

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    j = 0;
    while(i < argc)
    {
        alpha_mirror(argv[i][j]);
        put_str(argv[i][j]);
        i++;
        j++;
    }

    return(0);   
}