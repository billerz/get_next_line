#include "get_next_line_bonus.h"
#include <stdio.h>

char *get_next_line(int fd)
{
        char *res;
        int c;
        int i;
        static int fd2 = 0;

        res = (char *)malloc(sizeof(char));
        i = 0;
        if (fd2 == 0)
                fd2 = fd;
        c = ft_getchar(fd2);
        if (!res || fd2 == -1 || c == EOF)
        {
                fd2 = 0;
                free(res);
                return (NULL);
        }
        while (c != '\n' && c != EOF)
        {
                res = ft_addalloc(res, (++i) + 1);
                res[i - 1] = c;
                c = ft_getchar(fd2);
        }
        res[i] = '\n';
        return (res);
}
