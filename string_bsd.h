#ifndef STRING_BSD
#define STRING_BSD

int     strcmp_bsd(const char *s1, const char *s2);
int     strncmp_bsd(const char *s1, const char *s2, size_t n);

# ifndef __APPLE__
char   *strnstr(const char *s, const char *find, size_t slen);
size_t	strlcpy(char *dst, const char *src, size_t siz);
size_t	strlcat(char *dst, const char *src, size_t siz);
# endif /*__APPLE__ */

#endif
