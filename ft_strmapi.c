int ft_strlen(char *str)
{
    int i = 0
    while(str[i])
    {
        i++;
    }
    return i;
}
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int len;
    int i;
    char * result;

    i = 0;
    len = ft_strlen(s);
    result = malloc(len * sizeof(char));
    while(s[i])
    {
        result[i] = f(i,s + i);
        i++;
    }
}