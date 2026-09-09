# Containerization in DevOps Lab-2

## Introduction

This lab is based on process management using system calls such as `fork()`, `exec()`, `wait()`, and `waitpid()`. These system calls are used to create and manage processes.

The programs in this lab were executed using an online C compiler.

## Programs Performed

1. Display Parent Information
2. Display Child Information
3. Display Process Hierarchy
4. Make Parent Sleep
5. Make Child Sleep
6. Terminate Child
7. Terminate Parent
8. Wait for Child using `wait()`
9. Wait for Child using `waitpid()`
10. Launch New Program
11. Launch Program with Arguments

## Learning Experience

Through this lab, I learned how a new process is created using the `fork()` system call. I understood the difference between a parent process and a child process and how their process IDs can be displayed.

I also learned how processes can be controlled using `sleep()`, `wait()`, and `waitpid()`. The lab helped me understand how a parent process can wait for a child process to complete.

The `exec()` system call was also used to understand how one program can execute another program. I also learned how arguments can be passed while launching a program.

Overall, this lab gave me a better understanding of process creation and process management.

## Folder Structure

- `src` - Contains all the C source code files.
- `output` - Contains screenshots of the program outputs.

## Conclusion

This lab helped me understand the basic concepts of parent and child processes and the use of system calls such as `fork()`, `exec()`, `wait()`, and `waitpid()`.