char *ft_strtrim(char const *s1, char const *set)
//ft_strtrim("osama", "a")
{
    char const *S;
    size_t i;
    size_t d;
    size_t a;

    d = 0;
    i = 0;
    a = 0;
    while(s1[a])
        a++;
    while(s1[i])
    {
        while(set[d])
            {
                if (s1[i] = set[d])
                    a--;
                d++;
            }
            d = 0;
        i++;
    }
}