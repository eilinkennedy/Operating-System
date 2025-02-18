#include <stdio.h>

int main() {
    int memblock=0, n=0, i=0, j=0;
    printf("\t\t FIRST FIT\t\n");
    printf("Enter the number of memory blocks: ");
    scanf("%d", &memblock);

    struct memory {
        int size, alloc;
    } m[memblock];
    
    printf("Enter the size of memory block:\n");
    for (i = 0; i < memblock; i++) {
        scanf("%d", &m[i].size);
        m[i].alloc = 0;
    }

    printf("Enter the number of processes: ");
    scanf("%d", &n);
    
    struct process {
        int psize, flag;
    } p[n];
    
    printf("Enter the size of process:\n");
    for (i = 0; i <n; i++) {
        scanf("%d", &p[i].psize);
        p[i].flag = 0;
    }

 printf("\n\tPROCESS\t\tPROCESS SIZE\tBLOCK SIZE\n");
    for (i = 0; i <n; i++) {
        for (j = 0; j < memblock; j++) {
            if (!p[i].flag) {
           
                    if (p[i].psize<=m[j].size){
                    if(!m[j].alloc){
                        p[i].flag = 1;
                        m[j].alloc = 1;
                        printf("\t%d\t\t%d\t\t%d\n", i + 1, p[i].psize, m[j].size);
                    }
                }
            }
        }
        }
   
    for(i=0;i<n;i++){
    if(p[i].flag!=1){
    printf("the process is in waiting state");
    }
    }
    }
    

