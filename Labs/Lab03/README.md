# Lab 03

## Lab Procedure
Document your progress in a plain text file named `Lab03-LastName.txt`  
where LastName is your last name

At the top of the file please enter your personal details as follows:
```
Name: Your name
Email: Your email

```

**Where questions are presented, answer them in your lab notes.  For each step, include the command you used to perform the direction or answer the question posed.**  If you did something "wrong" make a note of it in your lab.  These are learning experiences.

If you've lost or forgotten your key, you'll need to provision a new stack in AWS Educate and create a new key.  
See [Remaking your AWS Educate environment](../../..) for instructions.

## Part 1: Aliases (2 pts)
1. On your **local** machine, create an `alias` called `aws-ssh` that contains the command and parameters you have  
been using to log on to your AWS Educate system.  Use an *absolute* path to your key file in your command.  Run your new `alias` to test it.  **Why use an absolute path instead of a relative path?** (1 pt)
* You can do this in whatever local terminal you have.
2. Make your `alias` permanent for your user by editing the correct file for your terminal.  **Write the alias in your lab notes** (1 pt)
* WSL2 / Linux Users: Edit `.bashrc` in the user's home directory.
* Mac Users: Edit `.bash_profile` in your user's home directory.
* MobaXTerm + CygUtils Users: Create / edit `.bash_profile` to store your aliases

## Part 2: IO Redirection (2 pts)
1. Go to your AWS environment.
2. Go to the folder in which you cloned your Git repository for this course.
3. Create a folder called `Lab03`
4. Create a file called `input.txt` with the following contents:
```
9.1
43.7
2.2
62.1
2.1
9.3
43.5
4.6
44.6
4.7
42.7
47.4
46.6
4.5
55.6
4
9.2
66.6
2
2.3
```
5. Direct the file `input.txt` into the sort command.  Write the command you used and the result of sucessfully running the command. (1 pt)
6. Direct the file `input.txt` into the sort command and direct the output to `output.txt`.  Write the command you used and the result of sucessfully running the command. (1 pt)  
**Useful commands: `man, vim, sort, <, >, >>`**
**Resources:**
* [An Intro to Linux IO Redirection](https://www.digitalocean.com/community/tutorials/an-introduction-to-linux-i-o-redirection)
* [IO Redirection](https://tldp.org/LDP/abs/html/io-redirection.html)

## Part 3: Intro to Scripts (2 pts)
1. Create a bash script called `sorting-party.sh`.  The script should have the following features:
* Takes an argument of a filename. (1 pt)
* Sorts the contents of the file stored in the argument using the `sort` command.
* Outputs the sorted data to a file called `sorted.txt` (1 pt)
* Hint: To run your script you may need / want to play with the file permissions.
2. Copy the contents of your script into your lab notes.  
**Resources:**
* [Command Line Arguments in Shell Script](https://tecadmin.net/tutorial/bash-scripting/bash-command-arguments/)
* [Use Command Line Arguents in Bash Script](https://www.baeldung.com/linux/use-command-line-arguments-in-bash-script)
* [Positional Parameters](http://linuxcommand.org/lc3_wss0120.php)

## Part 4: Intro to Regular Expressions (2 pts)
1. Add an if statement to your script that checks if the file in the argument ends in `.txt` (2 pts)
    * If the file does **not** end in `.txt` your script should exit with an error message: `File format not allowed`
2. Copy the contents of your revised script into your lab notes.  
**Resources**
* [How to Use Regex in Bash](https://www.poftut.com/how-to-use-regular-expression-regex-in-bash-linux/)

## Part 5: Updating the Git Repo (2 pts)
1. In the `Lab03` folder, create a file called `README.md`.
2. In `README.md` create a usage guide for your script.  Put the contents in your lab notes as well. (1 pts)
    * It is recommended (not required) to use markdown to make your `README.md` file look organized.
    * [markdown](https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet)
3. Use `git` commands to `add`, `commit` and `push` the `Lab03` folder to GitHub.  Write the command you used in your lab notes. (1 pts)

## Submission
Upload your file named `Lab03-LastName.txt` to the Pilot Dropbox.
