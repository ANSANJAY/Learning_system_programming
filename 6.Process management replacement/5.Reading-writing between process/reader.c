/*to pass fd from one program to another 
 *
 *
 */
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include"headers.h"


int main( int argc, char *argv[])
{
int fd,ret;
char sfd[4];
pid_t fret;
char buff[100];

printf("File: %s,PID: %d, PPID: %d\n",__FILE__,getpid(),getppid());

if(argc!=2)
{
	printf("Insufficient arg\n");
	return(0);
}

 fd = atoi(argv[1]);
 lseek(fd,0,SEEK_SET);

 ret  = read(fd,buff,100);

 if(ret ==-1)
{
perror("read");
exit(EXIT_FAILURE);
}

printf("READ: %s,%d bytes\n",buff,ret);
printf("File: %s,PID: %d, PPID: %d\n",__FILE__,getpid(),getppid());

return 0;
}

