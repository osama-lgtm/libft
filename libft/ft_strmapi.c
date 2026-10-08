
#include "libft.h"
#include <stdlib.h>
char *ft_strmapi(char const *s, char (*f)(unsigned int a, char b))
{
    size_t i;
    size_t len;
    char *result;
    if (!s || !f)
        return (NULL);
    len = ft_strlen(s);
    result = (char *)malloc(sizeof(char) * (len + 1));
    if (!result)
        return (NULL);
    i = 0;
        while(i < len)
        {
            result[i] = f(i, s[i]);
            i++;
        }
    result[i] = '\0';
    return (result);
}