1. Run `sudo apt update` - in your lab notes, explain what update does
2. Run `sudo apt upgrade` - in your lab notes, explain what upgrade does
3. Run `sudo apt autoremove` - in your lab notes, explain what autoremove does  
   **Useful commands: `man, apt, sudo`**

4. The remainder of this section will deal with theorical questions since we can't go to AWS in person.
   - There are two steps related to resizing partitions - list them.
     - Note the process to _expand_ a filesystem.
     - Note the process to _shrink_ a filesystem.
     - _Hint_: You can use Google, or you can look at the usage guide for `resize2fs`
   - Let's say we can go to AWS and plug in a brand new hard drive that is 8TB in size. Assume that when the drive  
     is plugged in, the drive name is `/dev/sdb`
     _ What partition table should we select? Why?
     _ What command(s) / program(s) can we use to create a partition table on our new drive?
     _ Note the command and its parameters
     _ What command can we use to create a filesystem on our partition? \* Note the command and its parameters
   - Let's assume the above went well. Write the command to mount the drive to `/mnt/Lab03`
     - If we wanted to make this permanent, what file would we need to edit?

`ssh` in to your AWS environment. If you've forgotten your key, you'll need to provision a new stack in AWS Educate and create a new key.  
See [Remaking your AWS Educate environment](../../..) for instructions.

1. Read `/boot/grub/menu.lst`. According to this file, what options would the grub menu present?
2. Using the command `df -h`, determine how much disk space is used and how much space is free?
3. Run the command `sudo parted -l`
   - What is the primary disk in the `/dev` folder?
   - What type of partition table is our AWS environment using?
     - Hint: If it looks unfamilar, use Google to find the common name
   - What file system is used by this device?
4. [Set file system of partition] Run `parted` on the disk (use the answer you found in Part 1-3)
   - How can you view the options for `parted`?
5. [Mount partition]
6. [Add partition to /etc/fstab]

Scripting:
Find out what shell we are using in AWS. Hint, read `/etc/passwd` (1 pt) \* A guide on what is in [/etc/passwd](http://www.linfo.org/etc_passwd.html)

Debugging shell scripts w/ error messages or https://www.shellcheck.net/#

Program that outputs file permissions

systems administration:
Create new user on system, create key pair for that user. Use `sftp` to get the private key, log in as the new user just using ssh (no -i flag)
Get the `md5sum` of both your local file and the file now copied to AWS. Make a change to the contents of one or the other, and check the `md5sum` of both again. Are the `md5sum`s of both files still the same? Why or why not?
Use journalctl on Linux or log show on macOS to get the super user accesses and commands in the last day. If there aren’t any you can execute some harmless commands such as sudo ls and check again.

vim tutor
add customization to .vimrc (plugin, coloring, something)
Different outputs in sed, pros and cons (in-place vs copy) - sed s/REGEX/SUBSTITUTION/ input.txt > input.txt why?

Late git:
Complete assigned sections of https://learngitbranching.js.org/
Fork and find a mistake / update / add another resource and create a pull request to course repo.

Networking:
Find an online data set like this one, this one. or maybe one from here. Fetch it using curl and extract out just two columns of numerical data. If you’re fetching HTML data, pup might be helpful. For JSON data, try jq. Find the min and max of one column in a single command, and the sum of the difference between the two columns in another.

Wireshark lab?

Download file with `wget`. Convert to different file type. Use `basename` to keep name but change extension

Sign a git commit
Encrypt and decrypt a file

5. Configure /etc/hosts
6. Configure ~/.ssh/config
7. In your client of choice, create a new key pair
   - Note: use the defaults (ie. ~/.ssh/id_rsa)
8. Copy your public key into the `authorized_keys` file on your AWS system.
9. SSH from your local machine to the AWS machine

c:\Windows\System32\Drivers\etc\hosts

Use your AWS portal, or just use Google.

Find something that people are using AWS for that you would be curious about investigating. Try to describe a project idea that comes to mind.

Note: this is for fun. Have some fun! Personally, I want to play with the AWS Deep Racer
