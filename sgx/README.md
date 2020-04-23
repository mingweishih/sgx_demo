# Prerequisite

Install [Open Enclave](https://github.com/openenclave/openenclave)

# Build & Run (In terminal 1)
$ mkdir build

$ cd build

$ cmake ..

$ make

Run the program with the following command.

$ ./host/demo_host ./enclave/enclave.signed

The exepcted output is

`Please guess (8 byte):`

Then please leave this terminal 1 as it is, and open another terminal.
The reason for this is to ensure the program is running and all its content is in the memory now.

# Obtain the memory dump (In terminal 2)

Get pid

$ ps -d | grep demo_host

Example output: `18644 pts/0    00:00:00 demo_host`

Dump the memory (with root privileges using `sudo`)

$ sudo gcore `pid`

Open the dump file

$ vi core.`pid`

Try to search "PASSWORD" in the file by typing

$ /PASSWORD

# Expected Results
Can't find “PASSWORD” string in the core.`pid` file 
