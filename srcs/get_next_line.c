#include "get_next_line.h"

char *get_next_line(int fd)
{
        char *res;
        int c;
        int i;
        static int fd2;

        res = (char *)malloc(sizeof(char));
        i = 0;
        c = ft_getchar(fd);
        if (fd2 == 0)
                fd2 = fd;
        if (!res || !(check_fd(fd, fd2)) || c == EOF)
        {
                fd2 = 0;
                free(res);
                return (NULL);
        }
        while (c != '\n' && c != EOF)
        {
                res = ft_addalloc(res, (++i) + 1);
                res[i - 1] = c;
                c = ft_getchar(fd);
        }
        res[i] = '\n';
        return (res);
}
