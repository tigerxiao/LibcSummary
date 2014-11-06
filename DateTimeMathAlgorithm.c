//主要总结时间日期函数、数学函数、算法函数等


/*时间函数归类
*
*           函数名                                  用法                                备注
*
*1.char *asctime(const struct tm *tm);          先获得tm，然后再字符串格式表示          线程不安全，有安全版本加_r
*
*2.char *ctime(const time_t *timep);            可直接通过time()获得形参                UP
*
*3. struct tm *gmtime(const time_t *timep);     格式间转换                              线程不安全
*
*4.struct tm *localtime(const time_t *timep);   NT                                      UP
*
*5.time_t mktime(struct tm *tm);                NT                                      NT
*
*6.time_t time(time_t *tloc);                   NT                                      首先被调用
*
*7. int gettimeofday(struct timeval *tv, struct timezone *tz);  NT                      获得时间
*
*8. int settimeofday(const struct timeval *tv, const struct timezone *tz);      NT      设置时间
*
*9. size_t strftime(char *s, size_t max, const char *format,
                       const struct tm *tm);    NT                                      时间转换成字符串，可以按指定格式
*
*/

/*常用数学函数归类
*
*           函数名                                  用法                                备注
*
*1. int abs(int j);                         求整数的绝对值                              NT,GCC编译需要加-lm
*
*2. float ceilf(float x);                   不小于参数的最小整型值                      NT
*
*3.double exp(double x);                    计算以e为底的x次方值                        NT
*
*4. double log(double x);                   计算以e为底的x对数值                        NT
*
*5. double sqrt(double x);                  计算平方根值                                NT
*
*6.double pow(double x, double y);          计算以x为底的y次方值                        NT
*
*7. double log10(double x);                 计算以10为底的x对数值                       NT
*/



/*数据结构及算法归类
*
*           函数名                                  用法                                备注
*
*1.char *crypt(const char *key, const char *salt);  加密数据                            线程不安全，有安全版本_r,GCC编译需要加-lcrypt
*
*2.void qsort(void *base, size_t nmemb, size_t size,
       int(*compar)(const void *, const void *));  比较函数可以根据是整数还是char 来做类似strcmp的函数      支持各种数据类型的快排
*
*3.int rand_r(unsigned int *seedp);             产生随机数种子                          一般情况下，参数可以填time(NULL),种子不同则随机值不同
*
*4.int rand(void);                              产生[0, RAND_MAX]内的随机值             不可重入，有安全版本_r
*
*/














