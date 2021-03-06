## Written answer:

1. Why is it important to "Safely Eject" / "unmount" a disk before unplugging / removing from the computer?
    - When editing a file, a "temp" version is made that contains your changes inbetween saves.  If this temp file does not have time to finish writing in between save states, the result can be loss of information.  Safely ejecting or unmounting allows any running operations to be wrapped up or will notify the user if the disk is still in use by a process on the system.

2. How do checksums help with verifying file integrity?
    - A checksum is generated by using a hashing algorithm on the file in question. If the hashing algorithm used gives you a different checksum than original file, you know that your file is not the same as the file that exists on the server.

3. Identify one hardware component of a computer and describe its function.
    - CPU - central processing unit - processes are sent to CPU by kernel.  The CPU is given an instruction set, accepts instructions from processes in memory, decodes the opcode, and executes the instruction.
    - RAM - where kernel and processes exist in very fast memory - has direct communication with CPU via buses on the motherboard
    - Disk: HDD / SSD - where data is stored.  Disks can be split into partitions of data
    - GPU - can be integrated into CPU or dedicated (has own slot in motherboard) - responsible for graphical output
    - wifi card / ethernet card - internet access, each card has own unique MAC address
    - Motherboard - circuit with sockets to plug in above listed devices.  Facilitates communication via buses
    - Power supply - motherboard, cpu, gpu, and disks and have unique power adapters.  Power supply uses a standard outlet and splits power needs among devices 
    - CPU fan - keeps the CPU cool.  CPU must have a working fan to pass POST

4. What benefit does swap or paging provide?
    - offload space for dedicated hardware RAM
    - If computer is able to hibernate, swap / paging is likely playing a role in saving off the system state

5. Describe one of things that the kernel does and why it matters.
    - starts init / systemd
    - prepares memory / page table- its own spot in memory and the remainder available for processes (between RAM and swap)
    - queues processes for the CPU, assigns amount of time / clock cycles the process will run on the CPU
    - loads drivers

6. What benefit do more CPU cores provide?
    - Each core is essentially a separate queue for the kernel to send processes to.  So more queues = more processes processed.
    - Also enables multi-threading of processes

7. Identify three components within a network packet.
    - version info
    - protocol info
    - hop limit
    - packet length / size
    - which packet in series
    - checksum (header and data)
    - source address
    - destination address
    - data / datagram
    - header, payload, trailer

8. Identify a key difference between using a VPN vs using a proxy.
    - Both VPNs and proxies use IP masquerading (your public IP is replaced with another for communications)
    - The core difference is that VPNs use end to end encryption, whereas proxies only mask, and do not encrypt

9. How can a computer with a private IP address communicate with the outside world?  The role of NAT should be used in your answer.
    - If my computer has a private IP, it cannot communicate directly with the outside world (the outside world cannot send packets back, as the world can only talk to public IPs).  The home setup would involve communicating via a router or gateway device.  When the router received the packets, if they were for a destination outside the network, the router would reconfigure the packet to use a public IP address provided by an ISP or otherwise assigned for traffic from that network.  This is know as Network Address Translation - the router will continue to translate my outgoing traffic to the world with the public IP and send the traffic back to me via the private IP from which I sent the request.
    - TLDR: A NAT gateway uses a routing table to communicate publicly for multiple private IP address devices.

10. Identify the three types of firewall chains and describe what traffic they manage.
    - Inbound - manages incoming traffic to the server / router / network
    - Forward - manages rules for traffic that will be forwarded to another address (you are not the destination, but you are along the way)
    - Outbound - manages outgoing connections.  If you disallow all outbound traffic, you also lock out of ability to connect to update servers, github, anyone.
    - Incorrect answers:
        - Three types of firewalls companies use: (source: https://bts-consulting.biz/2017/10/11/the-three-different-types-of-firewalls/)
            - packet filters
            - stateful inspections
            - proxy server firewalls
        - Three categories of firewalls: locally (via on-system firewalls), router (over network, home level), and enterprise (dedicated firewall)

## Written commands / code

1. In a directory, I have a folder named alpha and a file named beta.txt  Write a command or series of commands that will tar and compress the specified folder and file in the directory to archive.tar.gz
    - `tar -cvf archive.tar alpha beta.txt` && `gzip archive.tar`
    - `tar -czvf archive.tar.gz alpha beta.txt`
    - `tar -c alpha beta.txt -v -f archive.tar.gz -z`
    - c = create, v = verbose, f = file, z = compress, x = extract

2. I have two branches in my git repository, alpha and beta.  I have made changes on the beta branch and want to merge them into the alpha branch.  Write commands that will make sure I am on the correct branch, then merge the changes with alpha.
    - `git checkout alpha` # switch to alpha branch
    - `git status` # Read on branch line to determine current branch
    - `git branch` # shows current branch
    - `git merge beta` # merge changes on the beta branch with my current branch (alpha)

3. I need to kill a process running a python program.  Write commands to find the process and process ID, and how to end the process.
    - `ps`, `htop`, `top` # all options to show running processes and their PIDs
        - Other find methods: `lsof | grep <process name>`, `ps -fA | grep .py`, `pgrep`, `pidof`, `pfkill` (all in one option), `pstree -p`
    - Find PID of process to terminate
    - `kill PID` # where PID is process ID or process to terminate

4. Given a network prefix of 167.21.34.1 and a subnet mask of 255.0.0.0, write the CIDR notation.
    - 167.21.34.1/8
    - /8
    - /32 would be a subnet mask of 255.255.255.255
    - 255.0.0.0/8 lists the subnet mask twice, in a fashion.  

5. I need a file named payroll.csv hosted on 12.1.45.2  Using sftp, write the steps to connect to the server and download the file to my local machine.
    - sftp username@IP/hostname # use -i if you need to use a private key not in standard location
    - get payroll.csv # assuming file is in home directory of user, otherwise specify path
    - exit # leave
    - Note: `get` is for downloading, `put` is for uploading

## Fill in the blank / SA

1. During what stage of the boot process do I select the kernel and / or operating system I want to load?
    - boot loader / boot menu
    - GRUB is a boot menu usually used in Linux installs - GRUB is compatible with Windows Operating Systems / kernels
    - The boot loader / boot menu is run after POST and BIOS - BIOS being what will find a bootable disk and the bootloader, then passes control to the bootloader.
    - The kernel / kernel stage is after the bootloader / boot menu has had a kernel selected manually (via a menu) or by default
    - Stage listed as a number instead of a verbal description, based on the slides - not a strong answer.  Numeric stages differ by source - its important to know what is handling what parts of boot.

2. I have a computer using UEFI and brand new 6TB disk that I would like to add to my system.  Which partition table type should be used for the disk?
    - GPT = GUID Partition Tables
    - GUID is the partition ID, but is for GPT partitions

3. The ____ ____ maps pages (chunks) of process memory to where they are located on RAM or in swap / paging space on the disk.
    - page table / memory map / memory paging
    - kernel keeps the page table up to date (0.9)
    - CPU and MMU utilize the page table (0.8)
    - virtual memory (swap and paging), when used to offload a process's memory, needs to be kept track of by the paging table (0.7)
    - file systems can be applied to a partition (swap) in order to create a space for virtual memory, but file systems do not keep track of a map of memory locations for process pages. (0.5)
    - partition tables only deal with partitions on the disk

4. ____ is the default filesystem for partitions in Windows.  It supports partitions larger than 4 GB.
    - NTFS
    - FAT and FAT32 do not support partitions larger than 4 GB

5. A listing of public keys for connecting to a given user on a system are stored in the .ssh folder in the users home directory in the ____ file.
    - authorized_keys
    - .pub is a file extension type that typically denotes a public key.  There is only one key in the file (not a list) and it only works for the corresponding private key.  This public key would need to be listed in the remote system's authorized_keys file
    - known_hosts - holds list of computers that have been connected to.  Once you type to connect, a system identifier is added to known_hosts.  This identifier is checked every time you connect to the system - if the identifier has changed, you will get a warning message that the system may have been compromised / you are connecting to a different computer than was known.  The listing in known_hosts is updated for new connections and can be updated if you are indeed connecting to a new computer that is reusing the host name / ip address of a decommissioned machine.

## True / False

1. Forks of a process work within the process memory - resources for the process are shared.  Threads are independent processes that report to the parent process, but otherwise have their own resources.
    - False.  Definitions are swapped

2. Translation between hostnames and their registered IP addresses is done using TCP.  TCP servers hold records of IP address and their corresponding hostnames.
    - False.  DNS does this, not the TCP protocol.  The TCP protocol deals with communications

3. HTTPS uses port 443 by default.
    - True

4. The SSH program / service needs to be installed and running on the machine I am connecting to.
    - True

5. If a program (written in C) is compiled on a Linux system, the compiled version will also run on a Windows system. 
    - False