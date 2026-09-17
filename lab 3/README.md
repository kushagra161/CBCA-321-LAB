# Containerization in DevOps Lab-3

## Introduction

This lab is based on exploring and understanding the Linux file system. Various Linux commands were used to check important file system directories, explore their contents, view mounted file systems, check disk space, and examine information provided through the `/proc` file system.

The practical work was performed using the Webminal Linux terminal environment.

## Commands and Tasks Performed

1. **Checking Linux File System Directories**
   The main Linux file system directories were checked using the following command:

   ```bash
   ls -ld /bin /dev /proc /home /usr
   ```

   This command was used to display the details of the `/bin`, `/dev`, `/proc`, `/home`, and `/usr` directories.

2. **Exploring Linux File System Directories**
   The contents of different Linux directories were explored using:

   ```bash
   ls /bin | head
   ls /dev | head
   ls /proc | head
   ls /home
   ls /usr | head
   ```

   The `/bin`, `/dev`, `/proc`, `/home`, and `/usr` directories were explored. The `/home` directory returned a memory exhausted message in the Webminal environment.

3. **Checking Mounted File Systems**
   The `findmnt` command was used to view the mounted file systems.

   ```bash
   findmnt
   ```

   It displays information such as the file system source, type, and mount options. Entries such as `/`, `/proc`, `/sys`, `/dev`, and `/home` were observed.

4. **Checking Disk Space and File System Usage**
   The `df -h` command was used to check disk space in a human-readable format.

   ```bash
   df -h
   ```

   It displays total size, used space, available space, and usage percentage of mounted file systems.

5. **Checking the `/mnt` Directory**
   The `/mnt` directory was checked using:

   ```bash
   ls -ld /mnt
   ```

   The `/mnt` directory was found to exist in the Linux file system and was owned by the root user.

6. **Mounting a Temporary File System**
   An attempt was made to mount a temporary file system using `tmpfs`.

   ```bash
   mount -t tmpfs tmpfs /mnt
   ```

   The operation could not be performed because the Webminal environment requires root privileges for mounting.

7. **Checking File System Usage of `/mnt`**
   The disk usage of `/mnt` was checked using:

   ```bash
   df -h /mnt
   ```

   The `/mnt` directory was found to be part of the root file system (`/dev/sda`), with no separate temporary file system mounted on it.

8. **Checking the `/proc` File System**
   CPU information was examined through the `/proc` file system.

   ```bash
   cat /proc/cpuinfo | head
   ```

   The command displayed CPU-related information such as the processor, vendor ID, CPU family, model, model name, CPU speed, and cache size.

## Learning Experience

Through this lab, I learned about the basic structure of the Linux file system and the purpose of important directories such as `/bin`, `/dev`, `/proc`, `/home`, `/usr`, and `/mnt`.

I learned how to explore directory contents using the `ls` command and how to display directory details. I also learned how to check mounted file systems using the `findmnt` command.

The `df -h` command helped me understand how disk space and file system usage can be checked in a human-readable format.

I also learned about the `/mnt` directory and attempted to mount a temporary file system using `tmpfs`. The mounting operation could not be completed because the Webminal environment required root privileges.

Finally, I learned how the `/proc` file system provides information about the system and hardware. Using `/proc/cpuinfo`, I was able to view CPU-related information.

Overall, this lab gave me a better understanding of **Linux file system structure, mounted file systems, disk usage, temporary file systems, and the `/proc` file system**.

## Folder Structure

```text
Lab-3/
│
├── src/
│   └── Contains commands and related files, if applicable
│
└── output/
    └── Contains screenshots of the command outputs
```

## Conclusion

This lab helped me understand the basic concepts of the Linux file system. I practiced commands such as `ls`, `findmnt`, `df`, `mount`, and `cat` to explore directories, check mounted file systems, analyze disk usage, and access system information.

The practical exercises also helped me understand the `/mnt` and `/proc` file systems and the role of root privileges when performing mounting operations.

Overall, the lab provided hands-on experience with **Linux file system navigation, file system monitoring, disk usage, mounting, and system information**.
