## Command line programming

1. Compiling programs (Linux is not Windows)
   - Linux ELF (Executable & Linkable Format)
   - Windows EXE
2. Overview of command line debugging

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
5. Compression (gzip, tar)
6. File systems: vfat, ntfs, ext
   - ~~implementations / fragmentation / performance~~
7. ~~Network file share: SFTP, NFS, Samba~~
8. Commands: df, du, mount, umount, etc/fstab
9. Devices and drivers
10. File locks
11. Alternate data streams (od, /dev/null)

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

## System Management

1. Updates (Linux vs. Windows)
2. Installing packages with make
3. Virus scanning & types of computer diseases
4. Creating archives
5. Verifying files with checksums & keys
6. System restore (automatic, manual, backups)
7. Boot scripts & init.d
   - Windows Registry
   - cronjobs (Linux)
8. Open source movement
   - pros and cons
9. Torrents
10. User types and groups: sudo vs. admin vs. “other” (sudo, adduser, deluser)


## Computer-ception

1. Virtual machines (GUI style) and hypervisors
   - set up with an amount of RAM it can take up
   - full installation, including kernel - runs within hypervisor
   - hypervisor manages resources to share with host system
2. Containers (Needs Linux kernel)
   - runs in combination with normal system
   - relies on host kernel
   - environment in which you can install tools / packages / etc without changing host configuration
3. Cloud computing (Google, AWS, Azure)
   - Idea of "coding" infrastructure via configuration files