# Lab 08 - NOT FINALIZED

## Lab Procedure

**For each step, include the command you used to perform the direction or answer the question posed.** If you did something "wrong" make a note of it in your lab. These are learning experiences - writing them down will help you ask good questions later.  
`ssh` in to your AWS environment. If you've forgotten your key, you'll need to provision a new stack in AWS Educate and create a new key.  
See [Remaking your AWS Educate environment](../../..) for instructions.

1. Go to the folder in which you cloned your Git repository for this course.
   - Path of `/home/ubuntu/spring2021-ceg2350-YOURGITHUBUSERNAME/` OR `/home/ubuntu/git/spring2021-ceg2350-YOURGITHUBUSERNAME/` depending on your setup
2. Create a directory called `Lab08`
   - Path of `/home/ubuntu/spring2021-ceg2350-YOURGITHUBUSERNAME/Lab08` OR `/home/ubuntu/git/spring2021-ceg2350-YOURGITHUBUSERNAME/Lab08` depending on your setup
3. In this directory, create a file called `README.md`
4. This `README.md` file is where you will put your answers to this lab. I recommend creating two connections to your Linux AWS so you can keep the `README.md` file open while you expirement with the lab.
   - At the top of the file please enter your personal details as follows:

```
Name: Your name
Email: Your email

```

## Part 1: To Infinity (2 pts)

1. In your `Lab08` folder, create a script called `infinity`.
2. Each time the loop runs it should do the following (2 pts)
   - Output a statement such as "Still going!" to a file called `still-going.txt`
   - Sleep for 15 seconds
   - Repeat. Infinitely!

**Resources**

- [bash while loop](https://linuxize.com/post/bash-while-loop/)
- [sleep bash scripting](https://www.cyberciti.biz/faq/linux-unix-sleep-bash-scripting/)

## Part 2: Terminally Attached (5 pts)

1. Connect to your AWS system in two different terminals. (1 pt)
   - The PID of the terminal you will monitor processes on is: 
   - The PID of the terminal you will expirement with running your script is: 
2. Run the script you created in your terminal. Note the PID. Kill the process and write the command you used. (1 pt)
3. Run your script with `source`. Note the PID.  (1 pt)
   - If you kill this process, what will happen?  
   - Kill the process and write the command you used.
4. Run the script in the background using `bg`. (2 pts)
   - Note the PID and the background ID. 
   - Kill the background process via the background ID and write the command you used.

**Resources**

- [How To Use Bash's Job Control to Manage Foreground and Background Processes](https://www.digitalocean.com/community/tutorials/how-to-use-bash-s-job-control-to-manage-foreground-and-background-processes)
- [Understanding foreground and background Linux processes](https://linuxconfig.org/understanding-foreground-and-background-linux-processes)

## Part 3: Terminally Detached (3 pts)

1. Run your script in `screen`. Write the command(s) to set up a `screen` session, run your script inside, and detach from `screen`. (1 pt)
2. Use `exit` to disconnect from the terminal.  The other terminal can stay open (if it was still open).  Does the other terminal also know about your `screen` session?
3. Go back in, reattach to your `screen` and write the command(s) you used. (1 pt)
4. End the `screen` session and write the command(s) you used. (1 pt)

**Resources**

- [How to Use Linux Screen Command](https://www.howtogeek.com/662422/how-to-use-linuxs-screen-command/)

## Part 4: The better `marco` `polo` (4 pts)
1. In your `Lab08` folder, create a script called `marco` and a script called `polo`
2. Modify `PATH` to use this directory instead of the old one.  Write what you did. (1 pt)
3. Modify `marco` so that when it is run, it should save the current working directory in a file so that `polo` can reference it. (1 pt)
   - You may refer back to your work in `Lab04`
4. Modify polo so that when it is run, it should `cd` you back to the directory where you executed `marco`. (1 pt)
  - Hint: For `polo` to work in your shell, you are going to have to run it differently than `marco`.  The shell you are running in is the parent shell.  When you execute a script, it does its work in a "subshell".  If you run `polo` on its own, it might not create errors, but it also won't change into the directory in your shell, the parent shell - it did the action in the subshell!  To make it do the action in our shell, the parent shell, play with using `source` or `.`  
5. Write a basic `How To` guide for your `marco` and `polo` script here, including how to run each. (1 pt)

## Part 5: The Git Part (1 pt)

1. Use `git` commands to `add`, `commit` and `push` the `Lab08` folder to GitHub.

## Submission

In your GitHub repository, select the green `Code` button then select `Download ZIP`. Upload this zip file to the Pilot Dropbox.

In the `Comment` area in the Pilot Dropbox, copy URL / link to the repository corresponding to the project your are submitting.
