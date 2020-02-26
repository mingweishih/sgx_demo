# Build
$ mkdir build

$ cd build

$ cmake ..

$ make

# Run
$ ./host/demo_host ./enclave/enclave.signed

# Obtain the memory dump
Open another terminal

Get pid

$ ps -d | grep demo_host

Example output: `18644 pts/0    00:00:00 demo_host`

Dump the memory

$ sudo gcore `pid`

Open the dump file

$ vi core.`pid`

Try to search "PASSWORD" in the file

