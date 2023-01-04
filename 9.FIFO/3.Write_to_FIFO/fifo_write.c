#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<limits.h>

#define FIFO_NAME "./my_fifo"

int main()
{
int ret,fd;
if (access(FIFO_NAME, F_OK)==-1)
{
        ret = mkfifo(FIFO_NAME,0666);
        if( ret == -1)
        {
                fprintf(stderr,"FIFO not created %s\n",FIFO_NAME);
                exit(EXIT_FAILURE);
        }
        printf("process %d created FIFO\n",getpid());
        exit(EXIT_SUCCESS);

}
printf("FIFO: %s already created\n",FIFO_NAME);

fd = open(FIFO_NAME,O_WRONLY);
{
perror("open");
exit(EXIT_FAILURE);
}
printf("FIFO opened for writing  with fd %d",FIFO_NAME);
}
