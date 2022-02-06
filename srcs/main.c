#include "get_next_line.h"

int     main(void)                                                              
{                                                                               
        int     fd;                                                             
        //int     fd2;
        //int     fd3;
        fd = open("/Users/rath/Documents/42/gnl/test_file/foo1.txt", O_RDWR);
	//fd = STDIN_FILENO;
        //fd2 = open("/Users/rath/Documents/42/gnl/test_file/foo1.txt", O_RDWR); 
        //fd3 = open("/Users/rath/Documents/42/gnl/test_file/foo2.txt", O_RDWR); 
        char *s;                                                                
        //char *s2;                                                                
        if (fd != -1)                                                           
        {                                                                       
                while ((s = get_next_line(fd)) != NULL)                         
                        printf("%s", s);
		//s = get_next_line(fd);
		//printf("fd %s", s);
        	fd = open("/Users/rath/Documents/42/gnl/test_file/foo2.txt", O_RDWR);
		//fd = STDIN_FILENO; 
		s = get_next_line(fd);
		printf("fd %s", s);
		/*s = get_next_line(fd2);                                       
		printf("fd2 %s", s);
		s = get_next_line(fd);
		printf("fd %s", s);
		s = get_next_line(fd3);
		printf("fd3 %s", s);*/
        }                                                                       
        close(fd);                                                              
        //close(fd2);                                                              
        //close(fd3);                                                              
        return (0);                                                             
}                                                                               

