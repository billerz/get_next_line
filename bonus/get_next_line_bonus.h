#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

#ifndef GNL_H
# define GNL_H                                                               

size_t  ft_strlen(const char *s);
void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
int     ft_getchar(int fd);
char    *ft_addalloc(char *s, size_t n);
char    *get_next_line(int fd);

#endif
