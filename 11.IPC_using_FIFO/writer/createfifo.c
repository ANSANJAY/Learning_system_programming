#include"declarations.h"
#include"headers.h"

void* createfifo(void* arg)
{
	int ret;
#ifdef PRINT
        printf("%s:     Begin  \n",__func__);
#endif

	if(access(FIFO_NAME,F_OK)==-1)//if fifo doesn't exists
	{
	ret = mkfifo(FIFO_NAME,0666);
	if(ret==-1)
	{
	fprintf(stderr,"FIFO creation failed");
	exit(EXIT_FAILURE);
	}
	}
printf("%s : FIFO created by process:%d\n",__func__,getpid());

#ifdef PRINT
        printf("%s:     End  \n",__func__);
#endif
return 0;
}
