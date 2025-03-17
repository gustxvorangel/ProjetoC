#ifndef LIBFT_H
#define LIBFT_H

# include <stddef.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

int   fun_isdigit(int c);
int   fun_isalpha(int c);
int   fun_isalnum(int c);
int   fun_isascii(int c);
int   fun_isprint(int c);
void *fun_memset(void *s, int c, size_t n);
void *fun_memcpy(void *dest, const void *src, size_t n);
void *fun_memmove(void *dest, const void *src, size_t n);
char *fun_strncpy(char *dest, const char *src, size_t n);
char *fun_strncat(char *dest, const char *src, size_t n);
int   fun_toupper(int c);
int   fun_tolower(int c);
char *fun_strchr(const char *s, int c);
char *fun_strrchr(const char *s, int c);
int   fun_memcmp(const void *s1, const void *s2, size_t n);
int   fun_atoi(const char *str);
char *fun_strnstr(const char *haystack, const char *needle, size_t len);
char *fun_strdup(const char *s);
char *fun_strsub(const char *s, unsigned int start, size_t len);
char *fun_strtrim(const char *s);
void  fun_putchar_fd(char c, int fd);
void  fun_putstr_fd(char *s, int fd);
void  fun_putendl(char *s);
void  fun_putnbr_fd(int n, int fd);
void	*fun_calloc(size_t count, size_t size);

#endif
