#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>

#define FIFO_NAME "./myFifo"

int main()
{
	int ret;
	ret = mkfifo(FIFO_NAME,0666);
	if (ret ==-1)
	{
		perror("mkfifo");
		//printf(stderr,"FIFO not created %s\n",FIFO_NAME);
		exit(EXIT_FAILURE);
	}

	printf("Process %d created FIFO\n",getpid());
	exit(EXIT_FAILURE);
}
