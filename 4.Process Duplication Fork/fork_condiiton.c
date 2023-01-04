#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
int ret;

printf("Begin\n");
printf("PID : %d\n",getpid());
printf("Parent PID : %d\n",getppid());

ret = fork();

if(ret >0)
{
printf("Parent executing fork\n");
printf("fork ret: %d\n",ret);
printf("PID : %d\n",getpid());
printf("Parent PID : %d\n",getppid());
printf("End\n");
}

else
{
printf("child  executing fork\n");
printf("fork ret: %d\n",ret);
printf("PID : %d\n",getpid());
printf("Parent PID : %d\n",getppid());
printf("End\n");
}

printf("Executed by both\n");

return 0;
}
