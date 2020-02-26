# Build
$ make

# Run
$ ./guess

# Obtain the memory dump
Open another terminal

Get pid

$ ps -d | grep guess

Example output: `20873 pts/0    00:00:00 guess`

Dump the memory

$ sudo gcore `pid`

Open the dump file

$ vi core.`pid`

Try to search "PASSWORD" in the file

