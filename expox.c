#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
void main(int argc,char *argv[])
{
     
     if(fork()==0)   //fork() creates child process
     {
        execvp("./expoxch",argv);  //execvp() allows child to execute different program
     }
     else
     {
        wait(NULL);   //wait() allows child to complete its execution
        printf("\n parent");
        printf(" (PID=%d):Done",getpid());    //getpid() returns process id
        printf("\n");
     }
    
}

/*
Output:
tejal@ubuntu:~/Desktop$ gcc expoxch.c -o expoxch -lm    // creates executable of child
tejal@ubuntu:~/Desktop$ gcc expox.c
tejal@ubuntu:~/Desktop$ ./a.out 0.5 5                   // passing command line arguments

 Child(PID=4366):for a=0.5 the first 5 terms yield 1.648438
 parent (PID=4365):Done
*/


