int     *ft_rrange(int start, int end)
{
    int i;
    int j;
    int size;

    i = 0;
    j = end;
    size = 0;
    while (j >= start)
    {
        size++;
        j--;
    }
    int *result =  (int*)malloc(sizeof(int) * size);
    while(end >= start)
    {
        result[i] = end;
        end--;
    }
    return(result);     
}