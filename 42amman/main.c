#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
int main()
{
    char *str = ft_strdup("Hello, World!");
    printf("%s\n", str);
    free(str);
    return 0;
}