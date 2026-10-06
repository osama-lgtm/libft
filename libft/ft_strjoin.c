char *ft_strjoin(char const *s1, char const *s2)
{
    char const *S;
    size_t i;
    size_t d;

    i = 0;
    d = 0;
    while(s1[i])
        i++;
    while(s2[d])
        d++;
    S = malloc((i + d) * sizeof(char));
    while(i > 0)
    {
        *S = *s1;
        S++;
        s1++;
        i--;
    }
    while(d > 0)
    {
        *S = *s2;
        S++;
        s2++;
        d--;
    }
    return (S);
}