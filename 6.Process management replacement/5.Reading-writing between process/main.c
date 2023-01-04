/*to pass fd from one program to another 
 *
 *
 */
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include"headers.h"

int main()
{
int *fd;
char sfd[4];
pid_t fret;
char *buff="Hello ,world";
int ret;

printf("File: %s,PID: %d, PPID: %d\n",__FILE__,getpid(),getppid());
fd=(int*)openFile("read,write");

fret = fork();

switch(fret)
{
        case -1:
                perror("fork");
                exit(EXIT_FAILURE);
	case 0:
                sprintf(sfd,"%d",*fd);
                execl("./reader","reader",sfd,NULL);
		printf(" %s: %s ERROR: execl() failed \n",__FILE__,__func__);
	       	break;
        default:
                ret = write(*fd,buff,strlen(buff));
                if(ret ==-1)
                {
                perror("write");
                exit(EXIT_FAILURE);
                }
}


printf("File: %s,fd:%d\n",__FILE__,*fd);//fd
printf("File: %s,PID: %d, PPID: %d\n",__FILE__,getpid(),getppid());

}
