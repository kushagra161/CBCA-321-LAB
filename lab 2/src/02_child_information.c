#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    pid_t pid = fork();

    if (pid == 0)
    {
        printf("Child Process Information\n");
        printf("Child Process ID (PID): %d\n", getpid());
        printf("Parent Process ID (PPID): %d\n", getppid());
    }
    else if (pid > 0)
    {
        wait(NULL);
    }
    else
    {
        printf("Fork failed\n");
    }

    return 0;
}