# Lab 08

## Lab Procedure

Document your progress in a plain text file named `Lab08-LastName.txt`  
where LastName is your last name

At the top of the file please enter your personal details as follows:

```
Name: Your name
Email: Your email

```

**Where questions are presented, answer them in your lab notes. For each step, include the command you used to perform the direction or answer the question posed.** If you did something "wrong" make a note of it in your lab. These are learning experiences.

If you've lost or forgotten your key, you'll need to provision a new stack in AWS Educate and create a new key.  
See [Remaking your AWS Educate environment](../../..) for instructions.

## Part 1: [/insert AOL noises here/](https://www.youtube.com/watch?v=D1UY7eDRXrs) (11 pts)

For your local / personal system, identify the following information regarding your network connection:

1. Network interface
2. MAC address
3. IP Address
4. Subnet mask
5. Gateway
6. Is your IP address public or private?

On your AWS system, use `ifconfig` and `curl ipinfo.io` and read `/etc/hostname` to fill out the following:

7. AWS system private IP address:
8. AWS system private hostname:
9. AWS system public IP address:
10. AWS system public hostname:
11. Which of these IP addresses do you use to access your AWS system?

## Part 2: Snakes and Browsers (5 pts)

1. Install the `jupyter` package. Note the command you used. (1 pt)

2. On your AWS system, start a `jupyter notebook` with the no browser option. Copy the output into your lab notes. (1 pt)

   - Note: use `jupyter notebook --help`

3. Open a second terminal on your local system (do not `ssh` into the AWS system). Forward the port running `jupyter notebook` to your local system and open the notebook in your browser by following the steps below:
   - Use `ssh` to forward the port as follows:
   - `ssh -N -f -i your_private_key -L localhost:8888:localhost:8888 ubuntu@your_elastic_ip`
   - In your browser, type the following URL: `localhost:8888`
   - Paste the token (see your output from step 2) to get in.
   - Write the token in your lab notes (1 pt)
4. Answer the following: (2 pts)
   - What flags are in the `ssh` command in Step 3, and what do they do?
   - What files are displayed in the browser (what system are they from)?

**Resources**

- [Running a Jupyter Notebook](https://ljvmiranda921.github.io/notebook/2018/01/31/running-a-jupyter-notebook/)
- [Jupyter Notebook Tutorial - Go to Creating Your First Notebook](https://www.dataquest.io/blog/jupyter-notebook-tutorial/)

## Part 3: Get Off my Port (3 pts)

A common issue is that a port you want to listen on is already taken by another process. Let’s learn how to discover that process pid.

1. Install the `http` package for python using `pip` (1 pt)

   - Write the command to install `pip` for `python`
   - Write the command to install `http` with `pip`

2. In one terminal, execute `python3 -m http.server 4444` to start a minimal web server listening on port 4444.

3. Craft a command that uses `lsof` to show only the LISTEN[ing] ports on the system. Write the command in your notes and paste the output of running the command. (1 pt)

   - Useful commands: `lsof`, `|`, `grep`

4. Find that process pid and terminate it by running `kill <PID>`. Note the command in your notes(1 pt)

## Part 4: The Git Part (1 pt)

1. Create a folder in your repository called `Lab08`. Create a file called `README.md`. Copy and paste your lab notes into the file. `add`, `commit` and `push` your file to remote.

2. What branch are you on? (1 pt)

## Extra Credit: Good listening (2 pts)

Echo a message over a port. When a connection is made on `localhost` or using the public IP, the message should print until the connection is terminated.

## Submission

Upload your file named `Lab08-LastName.txt` to the Pilot Dropbox.

### Credits:

Exercise based on https://missing.csail.mit.edu/2020/debugging-profiling/
