#include<stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>


int main()
{

int fd,dfd;
fd = open("my_file",O_WRONLY);
if(fd == -1)
{
perror("open");
exit(EXIT_FAILURE);
}
printf("fd : %d\n",fd);
dfd = dup(fd);
printf("dfd : %d\n",dfd);
return 0;
}

