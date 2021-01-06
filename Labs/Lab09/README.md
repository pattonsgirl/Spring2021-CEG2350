# Lab 09

## Lab Procedure

Document your progress in a plain text file named `Lab09-LastName.txt`  
where LastName is your last name

At the top of the file please enter your personal details as follows:

```
Name: Your name
Email: Your email
```

**Where questions are presented, answer them in your lab notes. For each step, include the command you used to perform the direction or answer the question posed.** If you did something "wrong" make a note of it in your lab. These are learning experiences.

If you've lost or forgotten your key, you'll need to provision a new stack in AWS Educate and create a new key.  
See [Remaking your AWS Educate environment](../../..) for instructions.

## Part 1: Makey Makey (8 pts)

Needing to install a package from source is not an uncommon request. You will be installing `curl` manually from source on your AWS Educate Instance.  
Note: You may **not** use the package manager (`apt`).  
Note: Yes, this may already be installed. Don't worry about it.

1. Download the `curl` [source package](https://curl.haxx.se/download.html)
   - Useful commands: `wget`
2. Download the GPG key that corresponds with your file.
3. Use `gpg` to verify your downloaded file. Write the command you used.
   - [Useful resource](https://gnupg.org/download/integrity_check.html)
   - Note: The results may be ... inconsistent. In this instance, don't worry about it, but do try to understand what is happening.
4. Unpack the installation files
   - Useful commands: `xz`, `tar`
   - Note: you will need flags for the above commands
5. Look in the unpacked directory. One of the files is named `configure`. Run it.
6. Look in the directory again. What file appeared? Run it.
   - Hint: Pairs with `make`
7. Now run `make install`
8. `curl` should now be installed. Check the version number to verify the version you installed matches the version number you downloaded.

## Part 2: SSH (4 pts)

In a previous lab, you made a key pair on your AWS system and used it to create a passwordless authentication with GitHub. You have also created an ssh alias so that you can use a shortcut command instead of typing out your ssh connection everytime. Now you are going to create an ssh key on your local system, and use this new key to get into your AWS system.

1. On your local machine, identify what method you have been using to ssh in to your AWS system. This is your client. Consistentcy will be important here, especially for Windows users. Are you using Moba + Cygutils? WSL2? For Mac / Linux users, have you been using a local terminal?
2. Create a new ssh key on the client. Use the default directory / names. Do not enter a passphrase when prompted (just hit `Enter` to skip it). Write the command you used.
3. Copy the contents of the public key file to `/home/ubuntu/.ssh/authorized_keys` on your AWS Educate instance. Write your process.
4. Log out, and `ssh` to your AWS educate system with your private key (not the private key you got from AWS). Write the command you used.

## Part 3: Getting Zippy (8 pts)

1. Use `tar` to create a tar ball of your AWS home directory.
2. How large is the tarred file?
3. Use `gzip` (or a similar tool) to compress the file. How big is it now?
4. What is the `md5sum` of this file?
5. `exit` from your `ssh` connection with the AWS instance or open a new terminal. Use an `sftp` connection to your AWS educate instance to **download** the compressed home directory to your local system. Write the command(s) you used.
6. What is the `md5sum` of the file you downloaded?
7. Uncompress the file on your local system. Write the commands you used.
8. Do `git` commands still work in the folder you extracted? Write down your findings.
   - Hint: think back to ssh keys

## Part 4: The Git Part (1 pt)

1. Create a folder in your repository called `Lab09`. Create a file called `README.md`. Copy and paste your lab notes into the file. `add`, `commit` and `push` your file to remote.

## Extra Credit: G@M3R (4 pts)

Install ninvader from the package above. For credit, you need to list how you installed ninvaders succesfully. Since it is a text based C language game, you will need an additional library in C, called `ncurses`.  
Note: You may use the package manager (`apt`) to install the ncurses library, but you may **not** use the package manager (`apt`) to install ninvaders.

## Submission

Upload your file named `Lab09-LastName.txt` to the Pilot Dropbox.
