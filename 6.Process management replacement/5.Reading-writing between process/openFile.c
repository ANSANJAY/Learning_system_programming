/*to pass fd from one program to another 
 */
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include"headers.h"

void* openFile(void *arg)
{
int i;
int *fd;
char *fileName;
char ch;

printf("File: %s,PID: %d, PPID: %d\n",__FILE__,getpid(),getppid());

fileName =(char *)malloc(20);
if(!fileName)
{
perror("malloc");
exit(EXIT_FAILURE);
}
memset(fileName, '\0',20);
i=0;
do
{
ch = getchar();
if(ch =='\n')
break;
*(fileName+i++)=ch;
}while(1);

fd = (int*)malloc(sizeof(int));
if(!fd)
{
	perror("malloc");
	exit(EXIT_FAILURE);
}

if ( strncmp( (char*)arg,"read,write",10)==0) 
	*fd = open(fileName ,O_CREAT|O_RDWR);

if(*fd == -1)
{
	perror("open");
	exit(EXIT_FAILURE);

}
printf("File: %s,fd:%d\n",__FILE__,*fd);//fd
printf("File: %s,PID: %d, PPID: %d\n",__FILE__,getpid(),getppid());

return (void*)fd;
}
