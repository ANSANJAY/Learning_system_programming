#define NOF 5
#define PRINT
#define FIFO_NAME "./myfifo"


int init();

extern void* createfifo(void*);
extern void* openfile(void*);
extern void* writefifo(void*);

extern void* (*fptr[NOF])(void*);


