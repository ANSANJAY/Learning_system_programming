#include"headers.h"
#include"declarations.h"

void*  writefifo(void* arg)
{
int wfd,ret;
char buff[128];
#ifdef PRINT
        printf("%s : Begin \n",__func__);
#endif

wfd=*(int*)arg;// incoming arg is void * , converting that too int* , (*) to derefrence to int

memset(buff,'\0',128);

while(1)
{

	if(!fgets(buff,128,stdin))
	{
	perror("fgets");
	exit(EXIT_FAILURE);
	}

	ret = write(wfd,buff,128);
		if(ret==-1)
		{
			perror("write");
			exit(EXIT_FAILURE);
		}
		
		if (strncmp(buff,"end",3)==0)
			break;
}
#ifdef PRINT
        printf("%s : End \n",__func__);
#endif
	exit(EXIT_SUCCESS);
}
