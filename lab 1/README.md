# Containerization in DevOps Lab-1

## Introduction

This lab is based on basic Linux process management and control. Various Linux commands were used to create, monitor, suspend, resume, terminate, and manage processes.

The lab was performed using an online Linux terminal environment.

## Commands and Tasks Performed

1. **Executing the `sleep` Command**
   The `sleep 500` command was executed to pause a process for 500 seconds.

2. **Stopping a Process Using `Ctrl + Z`**
   `Ctrl + Z` was used to suspend the currently running foreground process.

3. **Viewing Running Processes**
   The `ps -aux` command was used to display information about currently running processes.

4. **Terminating a Process Using `kill`**
   A process was terminated using its Process ID (PID) with the `kill` command.

   Example:

   ```bash
   kill 14486
   ```

5. **Checking the Status of Jobs**
   The `jobs` command was used to check the status of processes running in the background or in a stopped state.

6. **Running a Process in the Background**
   The `&` symbol was used to run a process in the background.

   ```bash
   sleep 1000 &
   ```

7. **Using the `bg` Command**
   The `bg` command was used to resume a stopped process and continue its execution in the background.

8. **Using the `fg` Command**
   The `fg` command was used to bring a background process back to the foreground.

9. **Stopping the Foreground Process**
   After bringing the process to the foreground, `Ctrl + Z` was used to suspend the process again.

10. **Displaying the Process Tree**
    The `pstree` command was used to display running processes in a tree structure and show the relationship between parent and child processes.

11. **Monitoring Processes Using `top`**
    The `top` command was used to display running processes and system resource usage in real time.

    The `q` key was used to exit the `top` command.

12. **Using the `nice` Command**
    The `nice` command was used to run a process with a specified scheduling priority.

    ```bash
    nice sleep 100
    ```

13. **Verifying the Process Using `ps -aux`**
    The `ps -aux` command was executed again to verify whether the `sleep` process was running.

## Learning Experience

Through this lab, I learned how Linux processes can be executed, controlled, monitored, and terminated using different commands.

I learned how to suspend a running process using `Ctrl + Z` and how to check process information using `ps -aux`. I also learned how to terminate a process using its Process ID with the `kill` command.

The lab helped me understand the difference between foreground and background processes. Commands such as `jobs`, `bg`, and `fg` were used to manage processes in different states.

I also learned how to view the process hierarchy using `pstree` and monitor running processes and system resource usage using `top`.

Finally, the `nice` command helped me understand that processes can be executed with a specified scheduling priority.

Overall, this lab gave me a better understanding of **Linux process management, process control, foreground and background execution, process monitoring, and process priority**.

## Folder Structure

```text
Lab-1/
│
├── src/
│   └── Contains source files, if applicable
│
└── output/
    └── Contains screenshots of the command outputs
```

## Conclusion

This lab helped me understand the basic concepts of Linux process management. I practiced commands such as `sleep`, `ps`, `jobs`, `kill`, `bg`, `fg`, `pstree`, `top`, and `nice`.

The practical exercises provided an understanding of how processes can be **executed, suspended, resumed, monitored, terminated, and managed in the foreground and background**.
