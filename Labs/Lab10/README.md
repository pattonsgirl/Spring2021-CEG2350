# Lab 10 - NOT FINALIZED

## Lab Procedure

**For each step, include the command you used to perform the direction or answer the question posed.** If you did something "wrong" make a note of it in your lab. These are learning experiences - writing them down will help you ask good questions later.  
`ssh` in to your AWS environment. If you've forgotten your key, you'll need to provision a new stack in AWS Educate and create a new key.  
See [Remaking your AWS Educate environment](../../..) for instructions.

1. Go to the folder in which you cloned your Git repository for this course.
   - Path of `/home/ubuntu/spring2021-ceg2350-YOURGITHUBUSERNAME/` OR `/home/ubuntu/git/spring2021-ceg2350-YOURGITHUBUSERNAME/` depending on your setup
2. Create a directory called `Lab10`
   - Path of `/home/ubuntu/spring2021-ceg2350-YOURGITHUBUSERNAME/Lab10` OR `/home/ubuntu/git/spring2021-ceg2350-YOURGITHUBUSERNAME/Lab10` depending on your setup
3. In this directory, create a file called `README.md`
4. This `README.md` file is where you will put your answers to this lab. I recommend creating two connections to your Linux AWS so you can keep the `README.md` file open while you expirement with the lab.
   - At the top of the file please enter your personal details as follows:

```
Name: Your name
Email: Your email

```

## Part 1: Can do `conda`

Needing to install a package is not an uncommon request. To practice this skill, you will be installing `conda` (short for Anaconda Python).
   - [Installation guide in full](https://docs.anaconda.com/anaconda/install/linux/)

1. Check the current version of `python` when run with `python --version`.  Write the output.
1. Download the installer for Linux Python 3.8 64-bit to your AWS system.  Write the command you used.
   - **Useful commands**: `wget`, `curl`, `sftp`
   - Link to [all installers](https://www.anaconda.com/products/individual)
   - Link to [download the correct installer](https://repo.anaconda.com/archive/Anaconda3-2020.11-Linux-x86_64.sh)
2. Verify the integrity of your download by comparing the SHA-256 hash of the downloaded file to the hash listed on the site.  Write the command you used to compute the hash and write the SHA-256 sum that was output.
   - Link to [hashes of installer](https://docs.anaconda.com/anaconda/install/hashes/Anaconda3-2020.11-Linux-x86_64.sh-hash/)
3. Looking at what your downloaded installer is quite interesting.  Go ahead, `cat` it or, better, pipe it to `more`.  
   - What you will see is a full installation script, from variables to licensing to checks it is running on your system for compatibility.  - The coolest part, however, happens around line 377.  The comment refers to a **tarball**. The line after computes the MD5 sum of the last 589 lines of the file to check its integrity. 
   - Modify this command (on line 378): `tail -n +589 "$THIS_PATH" | md5sum -` and replace `"$THIS_PATH"` with your installer's file name.  **Write the modified command**.
   - Does your result match the result on line 379?
   - _Here's why this is cool_: if you download the installation file, it includes all needed base libraries to install Anaconda.  There are a chunk of base libraries (as you'll see during the install).  These libraries have been tarred and gnu-zipped, the result of which (think `cat` of which) has been put at the bottom of the install script.  This script includes (all in one file) a **tarball payload** so that it doesn't need to contact anything else on the network to finish the install, it just un-zips and un-tars the libraries.  This is an example of tarball payload being used for good.  This is a good moment to reflect of how tarball payloads could be snuck into an installer for less good.
4. You have downloaded a script that installs Anaconda python when the script is run (executed).  Run the script using your choice of method, but write how you installed it.
5. What directory did you install Anaconda to?  Write the full path.
6. Allow the installer to initialize Anaconda.  What file was modified?
7. Take a look at that file (towards the bottom, changes were appended), and describe what changes were made.  Think back to Lab04 when you played with a certain environment variable...
8. Why does it recommend we restart the shell / logout and back in?  Think back to Lab03 when you messed with your system `.bachrc`...
9. Updated the shell as you see fit, write what you did.
10. Check the current version of `python` when run with `python --version`.  You can also run `python` on its own which should verify again whcih version of `python` you are now running.  Write the output.
   - Note: this should be changed from before.  If not, circle back to questions 6 & 7 and rethink your answers.

## Part 2: Getting Zippy (8 pts)

1. Use `tar` to create a tar ball of your AWS home directory.
2. How large is the tarred file?
3. Use `gzip` (or a similar tool) to compress the file. How big is it now?
4. What is the `md5sum` of this file?
5. `exit` from your `ssh` connection with the AWS instance or open a new terminal. Use an `sftp` connection to your AWS educate instance to **download** the compressed home directory to your local system. Write the command(s) you used.
6. What is the `md5sum` of the file you downloaded?
7. Uncompress the file on your local system. Write the commands you used.
8. Do `git` commands still work in the folder you extracted? Write down your findings.
   - Hint: think back to ssh keys

- Note: this will snapshot your directory, but there is more of the lab to go.  You'll need to go through this process again if you'd like to get everything after you've made updates.

## Part 3: SSH

In a previous labs, you downloaded a _private_ key from AWS and used it to sign in. You made a key pair on your AWS system and used it to create a passwordless authentication with GitHub. You have also created an ssh alias so that you can use a shortcut command instead of typing out your ssh connection everytime. Now you are going to create an ssh key on your local system, and use this new key to get into your AWS system.

1. On your local machine, identify what method you have been using to ssh in to your AWS system. This is your client. Consistentcy will be important here, especially for Windows users. Are you using Moba + Cygutils? WSL2? For Mac / Linux users, have you been using a local terminal?
2. Create a new ssh key on the client. Use the default directory / names. Do not enter a passphrase when prompted (just hit `Enter` to skip it). Write the command you used.
   - **Useful commands**: `ssh-keygen`
3. On your client, what directory your key was created in?
4. On your client, which is the private and which is the public key?  How can you tell?
5. In another terminal, connect to your AWS system as you usually have.  Write the full command you have been using to connect (you may need to view your `.bashrc` file)  
6. View the current contents of `/home/ubuntu/.ssh/authorized_keys` and read through the following notes.
   - On a given system, usually for a given user account (in this case, `ubuntu`), the `authorized_keys` file contains all public keys that are allowed to authenticate as that user.  If more users were created, and were going to use `ssh` keys for authentication, they would have their own `.ssh` folder with its own `authorized_keys` file with, again, a list of public keys that are allowed to authenticate as the user.  
   - On the AWS system, there is an entry in the `ubuntu` user's `authorized_keys` that correlates back to the beginning of the course, when you created a key pair on AWS.  AWS had you download the _private_ key.  When you clicked through to create your environment, AWS put the _public_ key in the `ubuntu` user's `authorized_keys` file so that you could `ssh` from your system. 
7. On your client, copy the newly created public key and _append_ it to `/home/ubuntu/.ssh/authorized_keys` on your AWS system.  Write the process you used.
8. On your client, `ssh` in to the AWS system, but this time modify the old command to use your new private key instead of the one AWS had your download.  Write your modified `ssh` command.  There are at least two valid methods - you can use the hint to see if you can figure out the cleanest one.
   - Hint: previously, we had to use the `-i` flag with our `ssh` command because we were using a key with a non-default name (`aws-2350key.pem`) stored in a non-default location (your home directory) and therefore needed to use `-i` to specify where the _private_ key was for `ssh` to use it.  If you did things correctly, you now have a key in a default location that `ssh` (the program) knows about, with a default name `ssh` (the program) can use.  So I pose to you, do you need the `-i` flag or parameter?

## Part 4: The Git Part (1 pt)

1. Use `git` commands to `add`, `commit` and `push` the `Lab10` folder to GitHub.

## Extra Credit: G@M3R

Install ninvader from the package included in this folder, [ninvaders-0.1.1.tar.gz](ninvaders-0.1.1.tar.gz). For credit, you need to detail how you installed ninvaders succesfully. Since it is a text based C language game, you will need an additional library in C, called `ncurses`.

- Note: You may use the package manager (`apt`) to install the ncurses library, but you may **not** use the package manager (`apt`) to install ninvaders.
- **Useful commands**: `wget`, `tar`
- [Hint](https://www.cyberciti.biz/faq/how-to-create-tar-gz-file-in-linux-using-command-line/)
- Use `git` commands to `add`, `commit` and `push` to your `Lab10` folder to GitHub.


## Submission

In your GitHub repository, select the green `Code` button then select `Download ZIP`. Upload this zip file to the Pilot Dropbox.

In the `Comment` area in the Pilot Dropbox, copy URL / link to the repository corresponding to the project your are submitting.

