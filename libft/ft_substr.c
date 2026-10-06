

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    int i;
    char const *str;

    i = 0;
    str = malloc(len);
    while(len > 0)
    {
        str[i] = s[start];
        start++;
        len--;
        i++;
    }
    return (str);
}