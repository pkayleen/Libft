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
#include "ft_strchr.c"
#include "ft_strrchr.c"
#include "ft_strlcat.c"
#include "ft_strnstr.c"
#include "ft_memset.c"
#include "ft_memmove.c"
#include "ft_bzero.c"
#include "ft_substr.c"
#include "ft_strjoin.c"
#include "ft_putnbr_fd.c"
#include "ft_itoa.c"
#include "ft_strmapi.c"
#include "ft_strtrim.c"
#include "ft_strdup.c"
#include <string.h>
#include <stdio.h> //для printf
#include <stdlib.h> // для atoi и calloc
#include <ctype.h> // для isalpha, isdigit, isascii
//# include <bsd/string.h>

int main()
{
    char s1[20]= "test";
	char s2[20]= "tEst";
 //   char *ptr;

 //   ptr = strlcat(s2, s1, 20);
 //   printf("string s2 after strlcat: %s\n", ptr);
/*
    printf("function ft_strlen: %zu\n", ft_strlen(s1));
    printf("function strlen: %zu\n", strlen(s1));
*/
    printf("function ft_strncmp: %d\n", ft_strncmp(s1, s2, 4));
    printf("function strncmp: %d\n", strncmp(s1, s2, 4));

    char chh;
 //   const char *strs;
//    strs = "\0";
    chh = 'c';
    char *ptr1, *ptr2;
    ptr1 = strrchr(s1, chh);
    ptr2 = ft_strrchr(s1, chh);
    printf("String starting from %c is: %s\n", chh, ptr1);
    printf("String starting from %c is: %s\n", chh, ptr2);

    const char *num1 = "    -123r4ab567";
    char *num2 = "\t\v\f\r\n \f-06050";

    printf("num1 after function atoi: %d\n", atoi(num1));
    printf("num1 after function ft_atoi: %d\n", ft_atoi(num1));
    printf("num2 after function atoi: %d\n", atoi(num2));
    printf("num2 after function ft_atoi: %d\n", ft_atoi(num2));
/*
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
*/

    memset(s1, 'A', 20);
    ft_memset(s2, 'A', 20);
    printf("massive s1 after memset: %s\n", s1);
    printf("massive s2 after ft_memset: %s\n", s2);

    bzero(s1, 10);
    ft_bzero(s2, 10);

    printf("%zu\n", sizeof(s1));
    printf("%zu\n", sizeof(s2));
/*
    char s3[10] = "hello";
    char s4[4]= "man";
    printf("%lu\n", strlcpy(s3, s4, 10));
    printf("massive s3 after strlcpy: %s\n", s3);
    printf("%lu\n", ft_strlcpy(s3, s4, 10));
    printf("massive s3 after ft_strlcpy: %s\n", s3);
*/
    char p[10] = "hello";;
    char s6[1]= "";

//   printf("%lu\n", strlcpy(p, s6, 0));
//   printf("massive s5 after strlcpy: %s\n", p);
    printf("%lu\n", ft_strlcpy(p, s6, 0));
    printf("massive s5 after ft_strlcpy: %s\n", p);


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
    printf("z to lowercase: %c\n", ft_tolower(a));

//	printf("function ft_memset: %d\n", ft_memset(s1, 'A', 6));
//    printf("function memset: %s\n", memset(s1, 'A', 20));

    char str[] = "Hello";
    char str2[] = ", world!";
    printf("substr: %s\n", ft_substr(str, 0, 20));
    printf("strjoin: %s\n", ft_strjoin(str, str2));

    ft_putnbr_fd(1234, 1);

    printf("len of number: %ld\n", count_num(-2147483648));
	printf("num to str: %s\n", ft_itoa(-2147483648));

    char s3[] = "hello-world-";
    char set3[] = "hello-";
    char s4[] = "/n  /n /n ";
    char set4[] = " /n";
    char s5[] = "hello";
    char set5[] = "";
    printf("string1 after strtrim: %s\n", ft_strtrim(s3, set3));
    printf("string2 after strtrim: %s\n", ft_strtrim(s4, set4));
    printf("string2 after strtrim: %s\n", ft_strtrim(s5, set5));

    char *ss;

    ss = (char *)calloc(10, sizeof(char));
    printf("ss after calloc: %s\n", ss);
    ss = (char *)malloc(5);
    printf("ss after malloc: %s\n", ss);

    char ss1[6] = "12345";
    char ss2[6] = "1234";

    printf("string after strdup: %s\n", ft_strdup("HAHAHA \n tu me vois pas !"));
    printf("diff after memcmp: %d\n", memcmp(ss1, ss2, 4));
  //printf("string after memcpy: %s", ft_memcpy(ss1, ss2, 3));

    char    strr[] = "";
    // memcpy(strr, strr + 2, 4);
    // printf("str after memcpy: %s\n", strr);
// !!!src < dst && overlapping!!! <- с конца
    ft_memmove(strr + 2, strr, 0);
    printf("str after memmove: %s\n", strr);    //121234
// src > dst && overlapping  <- все ок! данные из src не теряются
    // ft_memmove(strr, strr + 2, 4);
    // printf("str after ft_memmove: %s\n", strr);    // 345656

    char haystack[] = "guy, hay hay!";
    char needle[] = "hay";
    printf("substr after strnstr: %s\n", strnstr(haystack, needle, 10));
    printf("substr after strnstr: %s\n", ft_strnstr(haystack, needle, 10));

}
