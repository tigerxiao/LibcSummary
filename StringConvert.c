//字符串转换、字符串测试及内存控制归纳

#include <stdlib.h>
#include <stdio.h>

/*字符串转换归类
*
*           函数名称                                用法                            备注
*
*1. double atof(const char *nptr);              convert a string to a double        不检查错误，不对就返回0
*
*2. int atoi(const char *nptr);                 convert a string to an integer      UP
*
*3. long long atoll(const char *nptr);          UP                                  UP
*
*4. float strtof(const char *nptr, char **endptr);  UP                              If endptr is not NULL, a pointer to the character after the last character used in the conversion is stored in the location referenced by
                                                                                    endptr.
*
*5. int toascii(int c);                         convert character to ASCII          The value returned is that of the converted character.
*
*6. int toupper(int c);                         convert letter to upper or lower case  The value returned is that of the converted letter, or c if the conversion was not possible.
*
*7. int tolower(int c);                         UP                                  UP
*
*8. char *gcvt(double number, size_t ndigit, char *buf);  convert a floating-point  returns the address of the string pointed to by buf.
                                                        number to a string
*/

/*字符串测试归类
*
*           函数名称                                用法                                备注
*
*1. int isalnum(int c);                         是否是英文或者数字                      正确返回1，错误返回0
*
*2. int isalpha(int c);                         是否是英文字母                          UP
*
*3. int isascii(int c);                         是否是ASCII 码                          UP
*
*4. int isblank(int c);                         a space or a tab                        NT
*
*5. int isgraph(int c);                         可打印字符，不包括空格                  NT
*
*6. int iscntrl(int c);                         NT                                      NT
*
*7. int isdigit(int c);                         NT                                      NT
*
*8. int isprint(int c);                         可打印字符，包括空格                    NT
*
*9. int ispunct(int c);                         标点符号或特殊字符                      NT
*
*10. int isspace(int c);                        space, form-feed ('\f'),                NT
                                                newline  ('\n'),  carriage
                                                return ('\r'), horizontal tab
                                                ('\t'), and vertical tab ('\v').
*
*11. int isupper(int c);                        NT                                      NT
*
*12. int isxdigit(int c);                       十六进制                                NT
*
*
*/

/*内存控制类归纳
*
*       函数名称                                    用法                                    备注
*
*1. void *malloc(size_t size);                  NT                                      默认不初始化
*
*2. void *calloc(size_t nmemb, size_t size);    申请size个nmemb大小的空间               默认初始为0
*
*3. void *realloc(void *ptr, size_t size);      扩展内存区域                            新扩展的部分默认不初始化
*
*4. void free(void *ptr);                       释放内存区域                            NT
*/




in_inotifyt main(int argc, const char *argv[])
{
    char *p = "f.23f";

    printf("==>   %f\n",atof(p));

    return 0;
}

