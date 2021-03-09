# Lab 06 - NOT FINALIZED

## Lab Procedure

**For each step, include the command you used to perform the direction or answer the question posed.** If you did something "wrong" make a note of it in your lab. These are learning experiences - writing them down will help you ask good questions later.  
`ssh` in to your AWS environment. If you've forgotten your key, you'll need to provision a new stack in AWS Educate and create a new key.  
See [Remaking your AWS Educate environment](../../..) for instructions.

1. Go to the folder in which you cloned your Git repository for this course.
   - Path of `/home/ubuntu/spring2021-ceg2350-YOURGITHUBUSERNAME/` OR `/home/ubuntu/git/spring2021-ceg2350-YOURGITHUBUSERNAME/` depending on your setup
2. Create a directory called `Lab06`
   - Path of `/home/ubuntu/spring2021-ceg2350-YOURGITHUBUSERNAME/Lab06` OR `/home/ubuntu/git/spring2021-ceg2350-YOURGITHUBUSERNAME/Lab06` depending on your setup
3. In this directory, create a file called `README.md`
4. This `README.md` file is where you will put your answers to this lab. I recommend creating two connections to your Linux AWS so you can keep the `README.md` file open while you expirement with the lab.
   - At the top of the file please enter your personal details as follows:

```
Name: Your name
Email: Your email

```

## Part 1: Self Discovery (5 pts)

Find out the following information about your personal system. Write the answers to the information requested.

- You can use the manufactuers website / manuals
- Windows users, I recommend `msinfo`
- You should _not_ need to install additional programs to find this information. If someone tells you to install something, run away.

1. BIOS version / mode. (1 pt)
2. CPU brand and info. (0.5 pt)
3. Installed memory size. (0.5 pt)
4. Virtual memory size. Does you system have a pagefile or a swapfile? What does this mean? (1 pt)
5. File system on installed disk(s). (0.5 pt)
6. Number of partitions. Which partition is your primary partition? (0.5 pt)
7. Get to your UEFI BIOS. Note what you did to access it. Then run away. (1 pt)
   - If you don't own the machine (and therefore may not be able to access the BIOS), lookup information about the machine and what steps would have worked.
   - Note for Chromebook users: Document what your tried and what you learned about your system.

## Part 2: Exploration (5 pts)

Use your AWS / Ubuntu system to discover the following information.

1. Read `/boot/grub/menu.lst`. What boot options would the `grub` menu present?
   - Note: since we are using a remote connection, we will never see / interact with the `grub` menu. But it is still there.
2. Using the command `df -h`, determine how much disk space is used and how much space is free.
3. Run the command `sudo parted -l` to answer the following:
   - What is the primary disk in the `/dev` folder?
   - What type of partition table is the device using?
     - Hint: If it looks unfamilar, use Google to find the common name
   - What file system is used by the device?
4. Use `lshw` to find the following:
   - BIOS version
   - CPU brand and info
   - Memory size
5. Does this system have a swap file (use virtual memory)? Write how you checked.
   - [Hint](https://unix.stackexchange.com/questions/23072/how-can-i-check-if-swap-is-active-from-the-command-line)

## Part 3: Create a filesystem from a file to store files (10 pts)

Perform the following in your AWS instance.  For this part, work in your user's home directory (`/home/ubuntu`), not your repository.  Your answers will still go in your `README.md` file associated with this lab.

1. Create a file of a defined amount of space: `dd if=/dev/zero of=space bs=1024 count=0 seek=$[1024*100]`
   - Explain `if` and `of`
   - Explain what `/dev/zero` is
   - What size file was created?
2. Create a filesystem on this file.  Write the command you used.
   - **Useful commands:** `mkfs`
3. Mount the filesystem to your home directory in the folder `usable`.  Write the command you used.
   - **Useful commands:** `mount`, `mkdir`
4. Check to see if the filesystem was mounted according to the output of `df -h`  Paste the line that indicates where it was mounted and space usage
   - Notes: you may see and be wondering about `/dev/loop#`  loop is what happens when you are using a file that has a filesystem inside, which is exactly what happened - we used `dd` to create a file filled with 0's, then we used `mkfs` to have the file be a filesystem.
   - [More info on `/dev/loop#`](https://en.wikipedia.org/wiki/Loop_device)
5. Go in to the folder `usable` and create some new files with some text inside.  Write the steps this took and if you changed permission sets.
6. Unmount the filesystem currently mounted to `usable`.  Write the command you used.
   - **Useful commands:** `umount`
7. Can you still access the files?  Why or why not?
8. While the filesystem is still unmounted, run `strings` on `space`.  What do you see?  Can you see the contents of your files?
   - Notes: `cat` would work, but also might act like its hanging.  `strings` is kind of like `cat` but it will ONLY print the strings of printable characters in files.
9. Mount the filesystem once more, and delete / remove one of the files.  Unmount the filesystem, and run `strings` again.  Can you see the contents of your files?
   - Notes: this is the big scary deal about data and disks and making sure data gets overwritten on a disk if the data needs to truly go away.  When you delete a file, all you've done is delete the inode association (you can't vim it, and you can't use an inode to get back to it), but the data is still written to the disk until it is overwritten (which could happen given enough time).  Removing a file is like throwing away a letter.  If the letter is still whole, it can be pulled back out and read.
10. Add this filesystem to be automounted by the OS using `/etc/fstab`  
      - Write the line you added to `/etc/fstab`
      - Hint: the line should be in the format of:
         - `/absolute/path/to/filesystem` **tab** `/absolute/path/to/directory/to/mount/to` **tab** `defaults` **tab** `0 0`
         - [More info on `fstab`](https://en.wikipedia.org/wiki/Fstab)
      - `reboot` the system and use `df -h` or head back to your `usable` folder to verify the mount worked (as in the file(s) you didn't delete should be viewable in the folder with `ls`)

## Part 4: The Git Part (1 pt)

1. Use `git` commands to `add`, `commit` and `push` the `Lab06` folder to GitHub.

## Submission

In your GitHub repository, select the green `Code` button then select `Download ZIP`. Upload this zip file to the Pilot Dropbox.

In the `Comment` area in the Pilot Dropbox, copy URL / link to the repository corresponding to the project your are submitting.
