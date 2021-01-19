#include <stdio.h>
#include <unistd.h>
#include <sys/syscall.h>
#include <errno.h>

int main() 
{
    sleep(200); 
    for(int i=0;i<5;i++) // loop will run n times (n=5) 
    { 
        if(fork() == 0) 
        { 
            printf("[son] pid %d from [parent] pid %d\n",getpid(),getppid()); 
            exit(0); 
        } 
    }
    sleep(200); 
    for(int i=0;i<5;i++) // loop will run n times (n=5) 
    wait(NULL); 
      
} 
