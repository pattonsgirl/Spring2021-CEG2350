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
