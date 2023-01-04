#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc,char *argv[])
{
printf("PID:%d,	PPID:%d,FILE Begin:%s\n",getpid(),getppid(),__FILE__);


printf("PID:%d, PPID:%d,FILE name:%s,Argument count :%d\n",getpid(),getppid(),__FILE__,argc);
printf("PID:%d, PPID:%d,FILE name:%s,argv[0]: %s\n",getpid(),getppid(),__FILE__,argv[0]);
printf("PID:%d, PPID:%d,FILE name:%s,argv[1]: %s\n",getpid(),getppid(),__FILE__,argv[1]);
//printf("PID:%d, PPID:%d,FILE name:%s,argv[2]: %s\n",getpid(),getppid(),__FILE__,argv[2]);
//printf("PID:%d, PPID:%d,FILE name:%s,argv[2]: %s\n",getpid(),getppid(),__FILE__,argv[3]);


printf("PID:%d, PPID:%d,Function End:%s\n",getpid(),getppid(),__FILE__);


}
