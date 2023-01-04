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
close(1);

dfd = dup(fd);

printf("dfd : %d\n",dfd); // it will be assigned with lowest available fd 
			  // lowest available fd is 1
			  // so dfd =1 
			  // but fd is supposed to printf
			  // now it writes to the file 
printf("print to file");
return 0;
}

