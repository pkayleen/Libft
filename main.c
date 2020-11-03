#include "ft_strlen.c"
#include "ft_strncmp.c"
#include "ft_atoi.c"
#include "ft_isalpha.c"
#include "ft_isdigit.c"
#include "ft_isascii.c"
#include "ft_isprint.c"
#include "ft_isalnum.c"
#include "ft_toupper.c"
#include "ft_tolower.c"
#include "ft_strlcpy.c"
#include "ft_memset.c"
#include <string.h>
#include <stdio.h> //для printf
#include <stdlib.h> // для atoi
#include <ctype.h> // для isalpha, isdigit, isascii
# include <bsd/string.h>

int main()
{
    const char *s1, *s2;
    s1 = "Abcdef";
	s2 = "Abcdef";

    unsigned char s[6] = "hello!";
    printf("function ft_strlen: %zu\n", ft_strlen(s1));
    printf("function strlen: %zu\n", strlen(s1));

    printf("function ft_strncmp: %d\n", ft_strncmp(s1, s2, 10));
    printf("function strncmp: %d\n", strncmp(s1, s2, 10));

    const char *num1 = "    -123r4ab567";
    char *num2 = "\t\v\f\r\n \f-06050";

    printf("num after function atoi: %d\n", atoi(num2));
    printf("num after function ft_atoi: %d\n", ft_atoi(num2));

    char ch = '5';

    printf("isalnum: %d\n", isalnum(ch));
    printf("ft_isalnum: %d\n", ft_isalnum(ch));
    if (isalpha(ch)) printf("%c is a letter\n", ch);
    if (ft_isalpha(ch)) printf("%c is a letter\n", ch);

    if (isascii(ch)) printf("%c is ascii character\n", ch);
    if (ft_isascii(ch)) printf("%c is ascii character\n", ch);


    printf("isdigit: %d\n", isdigit(ch));
    printf("ft_isdigit: %d\n", ft_isdigit(ch));
    if (isdigit(ch)) printf("%c is a digit\n", ch);
    if (ft_isdigit(ch)) printf("%c is a digit\n", ch);
    //ft_memset(s1, 'A', 6);
    //memset(s, 'A', 6);
    //printf("massive s1 after memset: %s\n", s);

    char s3[10] = "hello";
    char s4[4]= "man";
    printf("%lu\n", strlcpy(s3, s4, 10));
    printf("massive s3 after strlcpy: %s\n", s3);
    printf("%lu\n", ft_strlcpy(s3, s4, 10));
    printf("massive s3 after ft_strlcpy: %s\n", s3);

    char s5[10] = "hellohell";
    char s6[30]= "manmanman";
    printf("%lu\n", strlcpy(s5, s6, 10));
    printf("massive s3 after strlcpy: %s\n", s5);
    printf("%lu\n", ft_strlcpy(s5, s6, 10));
    printf("massive s3 after ft_strlcpy: %s\n", s5);
    

    int c;

    printf("not printable characters:\n");
    for (c = 0; c <= 127; ++c)
    {
        if (isprint(c) == 0)
            printf("%c ", c);
    }
    printf("\n");

    printf("not printable characters:\n");
    for (c = 0; c <= 127; ++c)
    {
        if (ft_isprint(c) == 0)
            printf("%c ", c);
    }
    printf("\n");

    char a = 'a';

    printf("z to lowercase: %c\n", tolower(a));
    printf("z to lowercase: %c", ft_tolower(a));

/**	printf("function ft_memset: %d\n", ft_memset(s1, 'A', 6));
    printf("function memset: %d\n", memset(s1, 'A', 6));
    **/
}
