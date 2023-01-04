#include"headers.h"
#include"declarations.h"

void*  readfifo(void* arg)
{
int rfd,ret;
char buff[128];
#ifdef PRINT
        printf("%s : Begin \n",__func__);
#endif

rfd=*(int*)arg;// incoming arg is void * , converting that too int* , (*) to derefrence to int

memset(buff,'\0',128);

while(1)
{

	ret = read(rfd,buff,128);
		if(ret==-1)
		{
			perror("read");
			exit(EXIT_FAILURE);
		}
		
		if (strncmp(buff,"end",3)==0)
			break;
		printf("PID %d , func : %s, %s\n",getpid(),__func__,buff);
}
#ifdef PRINT
        printf("%s : End \n",__func__);
#endif
	        exit(EXIT_SUCCESS);

}
