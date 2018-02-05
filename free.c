#include "types.h"
#include "stat.h"
#include "user.h"

int main(void){
 //char* f;
 //while(1){
 //f=sbrk(1000000);
 int PGSIZE =meminfo(0);
 int TOTAL=meminfo(2);
 int FREE=meminfo(1);
 printf(1,"Physical Memory (in bytes)\n");
 printf(1,"Total: %d\nFree: %d\nUsed: %d\n",TOTAL,FREE*PGSIZE,(TOTAL/PGSIZE-FREE)*PGSIZE);
 //printf(1,"Allocated: %p\n",f);
 //unsigned long long int i=meminfo(3)*4;
 //printf(1,"\tTotal\tFree\tUsed\n");
 //printf(1,"phy:\t%d\t%d\t%d\n",meminfo(2)/4096,meminfo(1),meminfo(2)/4096-meminfo(1));
 //printf(1,"virt:\t%d\t%d\t%d\n%d",meminfo(3),meminfo(4),meminfo(3)-meminfo(4),i);
 //sleep(30);
 //free(f);
 //}
 exit();
}
