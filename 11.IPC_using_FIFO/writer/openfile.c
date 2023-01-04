#include"headers.h"
#include"declarations.h"

void* openfile(void* arg)
{
	int *fd;
	#ifdef PRINT
        printf("%s:     Begin  \n ",__func__);
	#endif
	 printf("File opening for writing by process %d\n",getpid());

	fd =(int*)malloc(sizeof(int));
	if(!fd)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}
	*fd = open(FIFO_NAME,O_WRONLY);
	if(*fd ==-1)
	{
		perror("open");
		exit(EXIT_FAILURE);
	}
	
	printf("File opened for writing with file descriptor : %d by process %d\n",*fd,getpid());

	#ifdef PRINT
        printf("%s:     End  \n ",__func__);
	#endif
	
	return (void*)fd;

}

