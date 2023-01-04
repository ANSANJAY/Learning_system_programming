/*to pass fd from one program to another 
 *
 *
 */
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
int fd;
char sfd[4];
printf("File: %s,PID: %d, PPID: %d\n",__FILE__,getpid(),getppid());
fd=open("myfile",O_RDWR);
printf("File: %s,fd:%d\n",__FILE__,fd);

sprintf(sfd,"%d",fd);
execl("./test","test",sfd,NULL);
printf("File: %s,PID: %d, PPID: %d\n",__FILE__,getpid(),getppid());

}
