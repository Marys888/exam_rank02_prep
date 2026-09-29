int     *ft_range(int start, int end)
{
    int size;
    int i;
    int j;

    size = 0;
    i = 0;
    j = start;

    while(j <= end)
    {
        size++;
        j++;
    }
    int* result  = (int*)malloc(sizeof(int) * size);
    while(start <= end)
    {
        result[i] = start;
        start++;
    }
    return (result);
}