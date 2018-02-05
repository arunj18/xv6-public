Free command on xv6

This repository implements the free command (ram usage) on xv6.

Please note,
1. Documentation is yet to be added.
2. Dummy functions in various places for testing the code.
3. This repository will be updated with proper documentation regarding the specifics of implementing the free command.
4. It uses a system call by the name of meminfo written by me to explicity find out the number of free pages of memory. This can also be called by your normal program running on xv6 to find out current RAM usage. There are some options for meminfo which also were used for testing purposes and don't have any meaning for the free command yet.

How to run it?
1. type 'make' on the ubuntu terminal in the directory
2. type 'make qemu' on the ubuntu terminal after the previous make finishes.
3. xv6 will boot up and type free on the shell for the command to be executed. It will show the current usage, total and free physical memory available to xv6.
