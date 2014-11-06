
//内存及字符串控制及操作总结

#include <stdio.h>
#include <string.h>

/*已经不赞成使用的函数归类
*
*           函数名                                                   用途                                    替换方案
*1. int bcmp(const void *s1, const void *s2, size_t n);         compare byte sequences                        memcmp
*
*2. void bcopy(const void *src, void *dest, size_t n);          copy byte sequence                            memcpy Or memmove
*
*3. void bzero(void *s, size_t n);                              write zero-valued bytes                       memset
*
*4. char *index(const char *s, int c);                          locate character in string                    strchr
*
*5. char *rindex(const char *s, int c);                         locate character in string                    strrchr
*
*/

/*内存或字符串查找函数归类
*
*           函数名                                                   用途                                       备注
*1. void *memchr(const void *s, int c, size_t n);       scan memory for a character (Forward)       return a pointer to the matching byte or NULL if the
                                                                                                     character does not occur  in  the  given  memory area.
*
*2. void *memrchr(const void *s, int c, size_t n);      scan memory for a character  (Backward)      return a pointer to the matching byte or NULL if the
                                                                                                     character does not occur  in  the  given  memory area.
*
*3. char *strchr(const char *s, int c);                 locate character in string  (Forward)        return a pointer to the matched character or NULL if
                                                                                                     the character is not found.
*
*4. char *strrchr(const char *s, int c);                locate character in string  (Backward)       return a pointer to the matched character or NULL if
                                                                                                     the character is not found.
*
*5. char *strstr(const char *haystack, const char *needle);       locate a substring                 return a pointer to the beginning of the substring,
                                                                                                     or NULL if the substring is not found.
*
*6. char *strcasestr(const char *haystack, const char *needle);   locate a substring,ignores the     return a pointer to the beginning of the substring,
                                                                  case of both arguments.            or NULL if the substring is not found.
*
*/

/*内存及字符串拷贝、比较函数归类
*
*           函数名                                                  用途                                        备注
*
*1. void *memcpy(void *dest, const void *src, size_t n);        copy memory area                      The memcpy() function returns a pointer to dest.
*
*2. char *strcpy(char *dest, const char *src);                  copy a string                         return a pointer to the destination string dest.
*
*3. char *strncpy(char *dest, const char *src, size_t n);       copy a string                         return a pointer to the destination string dest.
*
*4. void *memmove(void *dest, const void *src, size_t n);       copy memory area , may overlap        returns a pointer to dest.
*
*5. int memcmp(const void *s1, const void *s2, size_t n);       compare memory areas                  returns an integer less than, equal to, or greater than zero if the first n bytes of s1 is found
*
*6. int strcmp(const char *s1, const char *s2);                 compare two strings                   return an integer less than, equal to, or greater than zero if s1 is foundfound
*
*7. int strncmp(const char *s1, const char *s2, size_t n);      compare two strings                   UP
*
*8. int strcasecmp(const char *s1, const char *s2);             compare two strings ignoring case     UP
*
*9. int strncasecmp(const char *s1, const char *s2, size_t n);  compare two strings ignoring case     UP
*
* 10. char *strdup(const char *s);                              duplicate a string                     returns a pointer to a new string which is a duplicate of the string s.  Memory for the new string is obtained with
*                                                                                                       malloc(3), and can be freed with free(3).
*/

/*
*内存或字符串连接、分割、求长等函数归类
*
*           函数名                                                  用途                                            备注
*1. char *strcat(char *dest, const char *src);                  concatenate two strings                 return a pointer to the resulting string dest
*
*2. char *strncat(char *dest, const char *src, size_t n);       UP                                      UP
*
*3. char *strtok(char *str, const char *delim);                 extract tokens from strings             第一次调用时，str必须不为空，第二次调用str必须为空
*
*4. char *strtok_r(char *str, const char *delim, char **saveptr);   可重入函数，线程安全                推荐使用这个分割函数，具体讨论见http://blog.csdn.net/liuintermilan/article/details/6283705
*
*/



int main(int argc, const char *argv[])
{
    char *p = "asdf";
    char *q = "axfs";

    printf("==> %d\n",memcmp(p,q,3));

    return 0;
}



