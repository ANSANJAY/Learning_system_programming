#include"headers.h"
#include"declarations.h"


void* createfifo(void*);
void* openfile(void*);
void* readfifo(void*);
void* (*fptr[NOF])(void*);

int init()
{

#ifdef PRINT
        printf("%s : Begin \n",__func__);
#endif

fptr[0]=createfifo;
fptr[1]=openfile;
fptr[2]=readfifo;

#ifdef PRINT
        printf("%s : Begin \n",__func__);
#endif

return 0;
}
