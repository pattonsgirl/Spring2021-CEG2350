# Midterm Review for CEG 2350
## Spring 2021

## Da Rules:
- Open 2/24 from 8:00 AM to 11:59 PM
- 1 attempt, 2 hours once started
- Open note, open terminal

## Basics

1. Operating systems as jargon – Windows, Linux, Mac
   - Operating systems exist, these are the big three
2. Linux distributions: Ubuntu, Debian, RedHat, etc
   - They do exist
3. Intro to course tools (AWS & MobaXTerm)
4. Intro to shells (bash, sh, zsh, powershell) and commands (man, vim, history)
   - to exit vim - escape key, colon (:), w (write), q (quit), ! (forcing a close / override & close - :q!), :x (shortcut for write and quit)
5. Intro to ssh & key pairs
   - ssh in to the system we are renting on AWS
   - ssh for a remote terminal connection
   - ssh keys / keypairs 
      - private key permissions - read write my user 
      - public keys - end in .pub
      - create a key pair on each system we are connecting from 
      - default folder is .ssh

## Git (version control)

1. Git servers vs. clients
   - Remote repository that is on GitHub - GitHub list of my public keys
   - Clients exist wherever I have a cloned repo
2. Git commands & what they do:
   - push - when we want to sync local with remote
   - pull - changes exist on remote (GitHub) that do not exist locally.  pull gets those changes and merges them with local
   - commit - snapshots of changes in the repository. A message has to be tied to each commit about what changed (-m)
   - add - when creating new files, they need to be added for tracking
   - clone - clone our repository which creates a folder, a copy of files that existed, and creates a connection back to remote (GitHub)
   - status - show you the status of your repository.  Can give helpful hints like what is tracked, what is ready to commit, if you're ready to push

## Files, directories, and OS structure

1. OS structure in Linux (and Mac) vs Windows
2. Files vs directories
   - relative vs absolute paths
   - Moving around: `..` (parent directory), `.` (current directory)
   - Commands: ls, cp, mkdir, rmdir, vim, mv, rm, cat, touch, head/tail, less/more
3. Importance of names and extensions (file)
4. Ownership & sharing
   - rwx permissions in Linux ~~(and Windows counterpart)~~
   - user vs. group vs. other
   - chmod, chown
   - User types and groups: sudo vs. admin vs. “other” (sudo, adduser, deluser)
5. Hard links & soft links (ln)
   - hard links reference same inode (same space on disk)
   - copies are separately (unique inodes, unique space on disk)
   - soft / sym links needed an absolute path
      - have a unqiue inode (can be deleted and the thing they link to will still exist)
6. Inodes
    - Commands: stat

## Scripting

1. Aliases & customizations (.bashrc, .profile, ~~.vimrc~~)
2. Commands: grep, diff, find, file, sort, whereis, which
3. IO redirection (<, >, |, ~~tee~~)
4. PATH (order of execution)
5. Scripting languages: bash, ~~python~~
    - syntax to run a script
6. Regular expressions (grep, test)
7. Bash language syntax:
    - variables
      - name=90
      - $name
    - arguments
      - ./my_script bananas oranges lemons
      - inside my script:
         - echo $2
    - if statements
      - syntax & how to use the test command for flags

## Command line programming

1. Assembly/machine language programming
   - C - compiled into binary - which can be executed with `./program`
   - Java - compiled into bytecode with javac - run in a java virtual machine (JVM) with `java name_of_classcode`
2. Interpreters (bash, python)
3. Libraries & dynamic linking (loads and links the shared libraries needed by an executable when it is executed)
4. Makefiles
   - run with `make`
   - can call targets with `make target_name`
```
target: dependency
   actions
```
5. Compiling programs (Linux is not Windows)
   - Specifically C / C++
   - Linux ELF (Executable & Linkable Format)
   - Windows EXE
   - versus Java, java has bytecode 
6. Commands: make


# PS. Lab Redo Opportunity
- Redo ONE Lab of Labs 1-5
- Due 2/26 at 11:59 PM
- Dropboxes open tomorrow
- Redo the *whole* lab not just the parts you missed
- Highest attempt will prevail