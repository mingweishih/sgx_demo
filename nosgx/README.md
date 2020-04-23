# Prerequisite
Install `gcore` (part of `gdb`).

$ sudo apt-get gdb

# Build & Run (In terminal 1)
$ make

Run the program with the following command.

$ ./guess

The exepcted output is

`Please guess (8 byte):`

Then please leave this terminal 1 as it is, and open another terminal.
The reason for this is to ensure the program is running and all its content is in the memory now.

# Obtain the memory dump (In terminal 2)

Get pid

$ ps -d | grep guess

Example output: `20873 pts/0    00:00:00 guess`

Dump the memory (with root privileges using `sudo`)

$ sudo gcore `pid`

Open the dump file

$ vi core.`pid`

Try to search "PASSWORD" in the file by typing

$ /PASSWORD

# Expected Results
Searched and found “PASSWORD” string in the core.`pid` file 
