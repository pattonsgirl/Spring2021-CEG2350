## Command line programming

1. Compiling programs (Linux is not Windows)
   - Linux ELF (Executable & Linkable Format)
   - Windows EXE
2. Installing compilers & adding compilers to PATH
3. Overview of command line debugging
4. Overview of "space" of a program

## Data storage and access:

1. Computer Hardware Basics
   - CPU
     - CPU cycle: instruction fetch, decode, and execution
   - RAM
   - Motherboard
   - HDD vs SSD
   - GPU (in terms of integrated vs dedicated)
   - Virtual memory: swap tables / paging
2. Booting of OS
   - Power on self-test (POST)
   - BIOS vs UEFI
   - Partition Tables: GPT vs MBR
   - Boot loaders: NTLDR, GRUB
3. Fragmentation
4. Sequential and random access
5. Compression & creating archives (gzip, tar)
6. File systems: vfat, ntfs, ext
   - ~~implementations / fragmentation / performance~~
7. ~~Network file share: SFTP, NFS, Samba~~
8. Commands: df, du, mount, umount, etc/fstab
9. Devices and drivers
10. File locks
11. Alternate data streams (od, /dev/null)
12. Verifying files with checksums ~~& keys~~

## Processes

1. Task Manager (Linux [top] vs. Windows)
2. init process / kernel level vs user level processes
   a. parent vs child process
3. System calls (way for programs / APIs to interact with the operating system)
   - systemd - systemctl & journalctl
   - Fork & exec
4. Commands: kill, ps, top, nice, bg, fg, jobs, nohup, ~~killall~~, screen
5. Preemptive (interruptible) and non-preemptive scheduling, priorities, signals
6. CPU & kernel memory management
7. Thread vs Fork
8. Single CPU multi-tasking
9. Multiple CPUs and SMP (Symmetric multiprocessing)

## Git (version control)

1. Git servers vs. clients
2. Git commands & what they do:
   - push
   - pull
   - commit
   - add
   - clone
   - **branching**
     - creating (-b or branch)
     - switching (checkout)
     - merging

## Networking

1. IP v4 addresses & CIDR notation
2. Host names, DNS, URLs
3. Protocols: HTTP (80) vs HTTPS (443)
4. TCP and UDP
5. Ports vs sockets, clients and servers, secure shell (22), sftp
   - Application opens a socket which is connected to a port
6. X11 in terms of graphical “forwarding” and role of a GUI
7. Web browsers (URLs, SSL certs) and clients (ping, wget, traceroute)
   - cookies
8. Physical pieces of a network
   - hosts, routers, switches, ISPs, wireless, LAN
9. Proxies & VPNs
   - VPNs provided encypted communication
   - vs not (proxies)
10. Caches - locally & via servers that cache info.
11. Firewalls - chains that restrict traffic
12. OSI layers (encapsulation / packets, application, transport, network, datalink, physical)
13. Virus scanning & types of computer diseases
14. Downloading installer (wget, curl)
15. Torrents - download over network of resources that have info

## Computer-ception

1. Virtual machines (GUI style) and hypervisors
   - set up with an amount of RAM it can take up
   - full installation, including kernel - runs within hypervisor
   - hypervisor manages resources to share with host system
   - needs physical machine to have resources to run host & additional hardware that cna be reserved for VM
2. Containers (Needs kernel)
   - runs in combination with normal system
   - relies on host kernel
   - environment in which you can install tools / packages / etc without changing host configuration

## System Management / Additional Topics

1. Updates (Linux vs. Windows)
2. Installing packages with make
3. System restore (automatic, manual, backups)
4. Boot scripts & init.d
   - Windows Registry
   - cronjobs (Linux)
5. Open source movement
   - pros and cons
6. User types and groups: sudo vs. admin vs. “other” (sudo, adduser, deluser)
3. Cloud computing (Google, AWS, Azure)
   - Idea of "coding" infrastructure via configuration files

# Previous Topics: Familiarity Expected

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
