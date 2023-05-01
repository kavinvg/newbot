//demostrate fork() system call
#include<stdio.h>
#include<sys/types.h>
 #include<unistd.h>
int main()
{
fork();
printf("The fork system is used \n");
}
output:
The fork system is used

// demostrate getpit(0 and getppid()
#include<stdio.h>
#include<sys/types.h>
 #include<unistd.h>
int main()

{
    pid_t parent_id,child_id;
    parent_id = getppid();
    printf("the parent id is %d\n",parent_id);
    child_id = getpid();
    printf("the child id is %d\n",child_id);
}

the parent id is 3085
the child id is 3086

