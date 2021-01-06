# Lab 04

## Lab Procedure

Document your progress in a plain text file named `Lab04-LastName.txt`  
where LastName is your last name

At the top of the file please enter your personal details as follows:

```
Name: Your name
Email: Your email

```

**Where questions are presented, answer them in your lab notes. For each step, include the command you used to perform the direction or answer the question posed.** If you did something "wrong" make a note of it in your lab. These are learning experiences.

If you've lost or forgotten your key, you'll need to provision a new stack in AWS Educate and create a new key.  
See [Remaking your AWS Educate environment](../../..) for instructions.

## Part 1: Regular Expressions (5 pts)

1. Use the package manager `apt` to install a package named `wamerican`. Write the command you used in your lab notes.
2. Verify `/usr/share/dict/words` exists. If it does not, see if `/usr/dict/words` exists.
3. For the `grep` command, describe what the `-c` and `-i` options do. (1 pt)
4. For each below, write the `grep` command you used as well as the answer.

- How many words in the `words` file start with a vowel (uppercase OR lowercase)? (1 pt)
- How many words in the `words` file have the word `cat` inside of the word? (1 pt)
  - concatenate, for example, should be a match
- How many words in the `words` file have a non-alphanumeric character in the word? (1 pt)
  - ' , e with a hat are examples of non-alphanumeric characters
- How many words in the `words` file have at least one letter `m` in the word? (1 pt)  
  **Resources**
- [RegEx Cheatsheet](http://web.mit.edu/hackl/www/lab/turkshop/slides/regex-cheatsheet.pdf)

## Part 2: Scripting, Paths, and Arguments, Oh My! (4 pts)

1. Create a `Lab04` folder in your git repository in your AWS Educate environment. Create a folder called `scripts`. Inside that folder, create two scripts, one named `marco` and one named `polo`.
2. When the command / script `marco` is run, it should save the current working directory in some manner. Copy your working `marco` script into your lab notes. (1 pt)
3. When the command / script `polo` is run, it should `cd` you back to the directory where you executed `marco`. Copy your working `polo` script into your lab notes. (1 pt)
4. Add the folder these scripts are located in to your `PATH`. (2 pts)

- First use the `export` command in you terminal to test you have properly added to the `PATH`. Write this command in your lab notes.
- Test that `marco` and `polo` can now be run in any directory.
- Add your working `export` command to your home directory's `.profile`.  
  **Resources**
- [Using Command Output](https://www.cyberciti.biz/faq/unix-linux-bsd-appleosx-bash-assign-variable-command-output/)

## Part 3: The Git Part (1 pt)

1. Create a `README.md` in your `Lab04` folder that provides a usage guide for `marco` and `polo`. Copy the contents of you `README.md` into your lab notes.
2. Use `git` commands to `add`, `commit` and `push` the `Lab04` folder to GitHub. Write the commands you used in your lab notes.

## Extra Credit (1 pt):

For the `marco` script, when `marco` is run it should check if a path has already been "saved" and ask if the user would like to update the path. Copy your extra credit `marco` script into your lab notes.

- [Hint](https://www.cyberciti.biz/faq/linux-unix-script-check-if-file-empty-or-not/)

## Additional Hints

Provided in email 9/25

#### Part 1:

- Install the wamerican package on your AWS system.
- Make sure to use the -E flag with grep to get full access to regular expressions.

#### Part 2:

- When adding your script directory to PATH, make sure to use the absolute path to the directory. PATH will not search subdirectories.
- For marco / polo, in lecture, we talked about the merits of saving the current path to a file versus a variable. If you go the file route, make sure both marco and polo use an absolute path to where the path stored by marco exists
- Assuming your polo is using cd (there are other ways, but this is most common), here are two hints:

  - Input redirection with cd won't work. cd needs a path. You'll need to play with using the result of one command and sending it to another. Not quite redirection in the sense we've been talking about. Think more PEMDAS or order of operations So if you know you'll need cd to change directory AND you know there are commands to read files, you could go for something like this in polo: cd \$(file_read_command /path/to/filename_to_read) This would chain reading the contents of the file into cd https://www.cyberciti.biz/faq/unix-linux-bsd-appleosx-bash-assign-variable-command-output/

  - If you run just polo, it won't do anything in your shell. You script is successfully doing stuff, you just can't see it. So we have to change how we run it. For the file method, polo will need to be run with . polo to have cd work in our shell When we run a script, what's really happening is the stuff in your script is running in it's own shell So for polo, your cd is working - in a shell you have no access to When we put the dot in front, we are basically dragging / syncing up with our shell Useful resource: https://linuxize.com/post/bash-source-command/

## Submission

Upload your file named `Lab04-LastName.txt` to the Pilot Dropbox.

### Credits:

Exercise based on https://missing.csail.mit.edu/2020/shell-tools/
