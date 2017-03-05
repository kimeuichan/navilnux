#ifndef _NAVIL_SYS
#define _NAVIL_SYS


#include <syscalltbl.h>


void syscall_init(void);

int sys_mysyscall(int,int,int);


int sys_itcsend(int,int);
int sys_itcget(int, int*);

int sys_semp(int);
int sys_semv(int);

void* sys_malloc(int);
int sys_free(void*);

extern void sys_scheduler(void);
#endif
