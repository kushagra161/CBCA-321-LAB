#include <stdio.h>
#include <unistd.h>

int main()
{
    printf("Parent Process Information\n");
    printf("Process ID (PID): %d\n", getpid());
    printf("Parent Process ID (PPID): %d\n", getppid());

    return 0;
}
