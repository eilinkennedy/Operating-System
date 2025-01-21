#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <stdio.h>

void main() {
    pid_t childid = fork();

    if (childid == 0) {
       
        printf("I am the child and child creation is successful\n");
        printf("Child id is %d\n", getpid());
        printf("Parent id is %d\n", getppid());
    }
    else if (childid > 0) {
        
        printf("I am the parent and parent creation is successful\n");
        printf("Parent id is %d\n", getpid());
        printf("Child id is %d\n", childid);
        wait(NULL); 
        printf("Child process is terminated and parent process is running\n");
    }
    else {
       
        printf("Parent-child creation unsuccessful\n");
    }

    exit(0);
}

