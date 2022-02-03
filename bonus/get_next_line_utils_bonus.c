#include "get_next_line_bonus.h"

#ifdef BUFFER_SIZE

size_t ft_strlen(const char *s)
{
        size_t n;

        n = 0;
        while (*s)
        {
                ++s;
                ++n;
        }
        return (n);
}

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
        int i;
        char *csrc;
        char *cdst;

        csrc = (char *)src;
        cdst = (char *)dst;
        i = 0;
        while (n > 0)
        {
                cdst[i] = csrc[i];
                --n;
                ++i;
        }
        return (dst);
}

int ft_getchar(int fd)
{
        static int n;
        static char *nvgt;
        static char *buff;

        buff = (char *)malloc(BUFFER_SIZE * sizeof(char));
        if (!buff)
                return (-1);
        n = 0;
        nvgt = buff;
        if (n == 0)
        {
                n = read(fd, buff, 1);
                nvgt = buff;
        }
        if (n != 0)
                return (*nvgt++);
        return (EOF);
}

char *ft_addalloc(char *s, size_t n)
{
        char *res;

        res = (char *)malloc(n * sizeof(char));
        if (!res)
                return (NULL);
        res = ft_memcpy(res, s, ft_strlen(s));
        return (res);
}

#endif
