#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
printf("File:%s;	Pid:%d;		Ppid:%d;	Start\n",__FILE__,getpid(),getppid());

printf("File:%s;	Pid:%d;		Ppid:%d;	End\n",__FILE__,getpid(),getppid());
exit(0);
}
