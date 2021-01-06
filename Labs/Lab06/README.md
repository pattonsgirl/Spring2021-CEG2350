# Lab 06

## Lab Procedure

Document your progress in a plain text file named `Lab06-LastName.txt`  
where LastName is your last name

At the top of the file please enter your personal details as follows:

```
Name: Your name
Email: Your email

```

**Where questions are presented, answer them in your lab notes. For each step, include the command you used to perform the direction or answer the question posed.** If you did something "wrong" make a note of it in your lab. These are learning experiences.

If you've lost or forgotten your key, you'll need to provision a new stack in AWS Educate and create a new key.  
See [Remaking your AWS Educate environment](../../..) for instructions.

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

## Part 3: Password Free Git (5 pts)

As promised, you are now required to set up passwordless connection to GitHub (so you'll be authenticating your connection via SSH) from your AWS Ubuntu system. If you already did this due to an earlier in-lecture recommentation, document your steps. A `grep` on `history` may help jog the memory.

1. [Create a key pair, upload public key (.\*\.pub) to github](https://docs.github.com/en/github/authenticating-to-github/generating-a-new-ssh-key-and-adding-it-to-the-ssh-agent)
2. [Change your repo to authenticate with SSH (not HTTPS)](https://help.github.jp/enterprise/2.11/user/articles/changing-a-remote-s-url/)
3. [If you have errors, poke around here](https://docs.github.com/en/github/authenticating-to-github/error-permission-denied-publickey)
4. Create a folder in your repository called `Lab06` with a `README.md` file. The file can contain your lab notes, or just a simple sentence ("This was pushed with no password!").
5. Use `git` commands to `add`, `commit` and `push` the `Lab06` folder to GitHub. Write the commands you used in your lab notes.

## Submission

Upload your file named `Lab06-LastName.txt` to the Pilot Dropbox.
