## Written answer:

1. What is the role of the PATH environment variable?

   - PATH is an environment variable that stores directories to commands & programs installed on the system. Once a directory is listed in PATH, PATH can use the path to the directory when a command / program is typed into the terminal.

2. Describe the difference between the inodes of hard linked files in comparison to copied files.

   - Copy has a different inode than the original file, and data is stored independent of the original (a change I make in one is not in the other because they are stored on separate spots on the disk). Hard links have the same inode (a change in one is also done on the other because they reference the same disk space)

3. Given the file below, write all details / implications of the permissions for the file.

```
-r-x-w-rw- foo bar temp
```
   - Owner in `foo`.  `foo` can read and execute
   - Group is `bar`.  Members in `bar` can write
   - Others can read and write
   - `temp` is a file, based on starting symbol is `-`

4. Given the following Makefile, what action is associated with the target gravy and what does it do?

```
gravy: my-code.c
     gcc -Wall -o program my-code.c
```

   - If `my-code.c` exists, the traget `gravy` which can be triggered with `make gravy` compiles `my-code.c` into `program` but does not run it

5. For the regular expression: `^[btg]\s\w+$`  
   Describe what the regular expression can match, then create an example that would and an example that would not match the expression.
   - starts with (triggered by `^`) `b`, `t` or `g` as definied by `[]`, but only one of these characters.
   - followed by a space character (` `, `\t`, `\n`)
   - ends with (triggered by `$`) one or more (`+` sign) alphanumeric characters (`\w`)
      - alphanumeric characters include capital `A-Z`, lowercase `a-z`, and `0-9`
   - Would match: `b abc`
   - Would not match: `z`

6. Describe a difference between a compiled (Java / C) and interpreted (python / bash) language.

   - The source code of a compiled language needs to be compiled before it can be run. The source code of an interpreted language can be run in by invoking its interpreter.

7. For referencing directories, describe the difference between using `.` and `..`
   - `..` references the parent directory (directory above)
   - `.` references the current directory (this directory I'm in)


## Written commands / code

1. In a local git repository, a new file is created called corgi.txt  
   Write the steps needed to add the file to my remote repository (GitHub).

```
git add corgi.txt
git commit -m "Adding corgi.txt"
git push
```

2. Craft the necessary command(s) to change the permissions on the file so that dave owns file.txt and can read and write, the group dev can read and write, and others can only read.

```
--wxr-x-wx bob dev file.txt
```
- Solution subset: if missing chown -20%
```
chown dave file.txt
chmod 664 file.txt
```
```
chown dave file.txt
chmod a-x file.txt
chmod ug+rw file.txt
chmod o+r file.txt
chmod o-w file.txt
```
```
chown dave file.txt
chmod ug=rw,o=r file.txt
```

3. Given the following Makefile contents, how can you run the target gravy?

```
default: my-code.c
    cat my-code.c

gravy: my-code.c
     gcc -Wall -o program my-code.c
```

- `make gravy`

4. Craft a bash if statement that checks to see if the file scripty.sh is exists, and if so prints a success message to the terminal.

```
if [[ -f scripty.sh ]]; then
   echo "scripty.sh exists"
fi
```
- `test` flags `-e` for existence and `-f` for existence & a regular (think ASCII readable) file accepted

5. What Linux command can help me find usage and documentation about another command?

- `man`, `info`
- `help` is accepted but works for a limited set of commands

6. Craft a snippet of a bash script that will print the the third argument given the following is entered on the command line:
```
./script dogs cats corgis
```
- `echo $3`
- `echo "$3"`

7. Craft an alias that would bind `whale` to `echo "flower pot"`.
- `alias whale='echo "flower pot"'`
- Misuse of quotes - (-10%)

8. In a single command, add the text "Spring break is in reach" to the file `positive-thoughts.txt` without overwriting the existing contents of the file.
- `echo "Spring break is in reach" >> positive-thoughts.txt`

## Fill in the blank

1. The \_\_\_\_ file in my home directory holds configurations for my bash shell, including aliases.

   - .bashrc
   - .bash_profile # also accepted

2. The \_\_\_\_ command, when given a file, shows me filesystem level information about a file, such as its inode, permissions for user, group, and other, and how many links exist to the inode.

   - stat
   - ls -li # also accepted

3. Symbolic links rely on \_\_\_\_ paths to link to the original file / program.

    - absolute

4. If my remote repository (GitHub) has content that my local repository does not have, I need to run `git \_\_\_\_` in order to get the updated content in my local repository.

    - pull

## True / False

1. In regular expressions, the + (plus) will match one or more occurrences of a pattern while a \* (asterisk) will match zero or more occurrences of a pattern.

   - True

2. If C source code is compiled in Linux, the compiled program can be transferred and run on Windows.

   - False

3. Private keys need to be uploaded to the machine I am connecting to (such as GitHub).  Permissions should be open so that anyone on the system can read the private key.

    - False

