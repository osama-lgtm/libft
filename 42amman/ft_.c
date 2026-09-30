#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
int ft_isalpha(char a)
{
    if ((a < 'z' && a > 'a') || (a <'Z' && a > 'A'))
        return 1;
    else
        return 0;
}

int ft_isdigit(char a)
{
    if(a > '0' && a < '9')
        return 1;
    else
        return 0;
}

int ft_isalnum(char a)
{
    if((a < 'z' && a > 'a') || (a <'Z' && a > 'A'))
        return 1;
    else if(a > '0' && a < '9')
        return 1;
    else
        return 0;
}

int ft_isascii(char a)
{
    if(a <= 127 && a >= 0)
        return 1;
    else
        return 0;
}

int ft_isprint(char a)
{
    if(a >= 32 && a <= 127)
        return 1;
    else
        return 0;
}

int ft_strlen(char *a)
{
    int i = 0;
    while(a[i] != '\0')
        i++;
    return i;
}

char ft_toupper(char a)
{
    if(a > 'a' && a < 'z')
        a -= 32;
    return a;
}

char ft_tolower(char a)
{
    if(a > 'A' && a < 'Z')
        a += 32;
    return a;
}

char *ft_strcat(char *text, char *cat)
{
    int a = 0;
    int i = ft_strlen(text);
    while(cat[a] != '\0')
    {
        text[i + a] = cat[a];
        a++;
    }
    return text;
}

int ft_strncmp(char *s1, char *s2, int n)
{
    while(*s1 && *s2 && n--)
    {
        if(*s1 != *s2)
            return ((unsigned char)*s1 - (unsigned char)*s2);
        s1++;
        s2++;
    }
    return 0;
}

int ft_atoi(char *str)
{
    int num = 0;
    int n = 1;
    while(*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
    if(*str == '-' || *str == '+')
    {
        if(*str == '-')
            n *= -1;
        str++;
        if(*str == '-' || *str == '+')
            return 0;
    }
    while(*str >= '0' && *str <= '9')
    {
        num *= 10;
        num += (*str - '0');
        str++;
    }
    return (num * n);
}

char *ft_strdup(char *str1)
{
    int i = 0;
    while(str1[i] != '\0')
        i++;
    char *str2 = malloc(sizeof(char) * (i + 1));
    i = 0;
    while(str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';
    return str2;
}

char *ft_strchr(char *S, char A)
{
    while(*S != '\0')
    {
        if(*S == A)
            return S;
        S++;
    }
    return NULL;
}

char *ft_strrchr(char *a, char A)
{
    char *last_occurrence = NULL;
    while(*a != '\0')
    {
        if(*a == A)
            last_occurrence = a;
        a++;
    }
    return last_occurrence;
}

int ft_strlcpy(char *dest, char *src, unsigned int n)
{
    int len = 0;
    while(src[len] && --n)
    {
        dest[len] = src[len];
        len++;
    }
    dest[len] = '\0';
    while(src[len])
    {
        len++;
    }
    return len;
}

int memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *p1 = s1;
    const unsigned char *p2 = s2;
    while (n--)
    {
        if (*p1 != *p2)
            return (*p1 - *p2);

        p1++;
        p2++;
    }
    return 0;
}

char *ft_memcpy(const void *dest, const void *src, int n)
{
     char *d = (char *)dest;
     char *s = (char *)src;
    while (*s && n--)
        *d++ = *s++;
    return (char *)dest;
}