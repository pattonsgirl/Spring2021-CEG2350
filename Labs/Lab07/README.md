# Lab 07

## Lab Procedure

Document your progress in a plain text file named `Lab07-LastName.txt`  
where LastName is your last name

At the top of the file please enter your personal details as follows:

```
Name: Your name
Email: Your email

```

**Where questions are presented, answer them in your lab notes. For each step, include the command you used to perform the direction or answer the question posed.** If you did something "wrong" make a note of it in your lab. These are learning experiences.

If you've lost or forgotten your key, you'll need to provision a new stack in AWS Educate and create a new key.  
See [Remaking your AWS Educate environment](../../..) for instructions.

## Part 1: To Infinity (2 pts)

1. Create a `Lab07` folder in your github repository in your AWS account.
2. Create a script in the folder that runs an infinite loop. Each time the loop runs it should do the following
   - Outputs a statement to a file called `still-going.txt`
   - Sleeps for 15 seconds
   - Repeats. Infinitely!
3. Paste your script into your lab notes.
4. `add`, `commit` and `push` your folder & script to your repository

**Resources**

- [bash while loop](https://linuxize.com/post/bash-while-loop/)
- [sleep bash scripting](https://www.cyberciti.biz/faq/linux-unix-sleep-bash-scripting/)

## Part 2: Terminally Attached (5 pts)

1. Connect to your AWS system in two different terminals. Note the PID of the terminal you will monitor processes on and the PID of the terminal you will expirement with running your script. (1 pt)
2. Run the script you created in your terminal. Note the PID. Craft a command to kill the process. (1 pt)
3. Run your script with `source`. Note the PID. What is interesting about the PID? How can you kill the process? (1 pt)
4. Run the script in the background. Note the PID. Craft a command to kill the background process. (2 pt)

**Resources**

- [How To Use Bash's Job Control to Manage Foreground and Background Processes](https://www.digitalocean.com/community/tutorials/how-to-use-bash-s-job-control-to-manage-foreground-and-background-processes)
- [Understanding foreground and background Linux processes](https://linuxconfig.org/understanding-foreground-and-background-linux-processes)

## Part 3: Terminally Detached (3 pts)

1. Run your script in `screen`. Write the command(s) to set up the screen, run your script inside, and detach from the screen.
2. Use `exit` to disconnect from the terminal.
3. Go back in, write the command(s) to reattach the screen.
4. Write the command(s) to end the screen session.

**Resources**

- [How to Use Linux Screen Command](https://www.howtogeek.com/662422/how-to-use-linuxs-screen-command/)

## Part 4: Gitting Branchy (5 pts)

Write the commands associated with the actions below. When asked to view a result, write in your notes that you do or do not see the corresponding confirmation.

1. Create a branch in your git repository called `development` (1 pt)
2. Switch to the branch.
3. Create a new file with some text in it on the branch and add + commit it to the branch.
4. Push your changes (and your branch) to remote (GitHub) (1 pt)
   - Note: if you try `git push` git will spit out a helpful hint
5. On GitHub, switch to the branch and confirm that your new file is there. Confirm that it is not yet on the `master`/`main` branch
6. Switch back to the `master`/`main` branch. (1 pt)
7. Merge the `development` branch with the `master`/`main` branch (1 pt)
8. Push the `master`/`main` branch to remote. (1 pt)
9. In GitHub, confirm your file that you created on the branch now exists in `master`/`main`

**Resources:**

- [Git Branches in a Nutshell](https://git-scm.com/book/en/v2/Git-Branching-Branches-in-a-Nutshell)
- [Git - Basic Branching & Merging](https://git-scm.com/book/en/v2/Git-Branching-Basic-Branching-and-Merging)

## Submission

Upload your file named `Lab07-LastName.txt` to the Pilot Dropbox.
