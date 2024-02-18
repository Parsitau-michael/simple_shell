


0x16. C - Simple Shell
This project has been done by [Parsitau Michael](https://github.com/Parsitau-michael) in collaboration with [Leonard Jembe](https://github.com/Mbaruku2003) as collaborators.
The project entails writing a simple UNIX command interpreter; In other word we are building a custom shell program that can take commands from the user and executes them.
a procss is an instance of an executing a program while producing a different id
* ppid is a parent of process ID
* ac:counts the number of arguenments passed in the command line
* av: the numer of arguenments in the command line
EXECVE
a system call that allows a process to execute another program
CREATING PROCESSES
fork creates a new child process, almost identical to th identical to the parent

Using the return value of fork, it is possible to know if the current process is the father or the child: fork will return 0 to the child, and the PID of the child to the father.
The wait system call (man 2 wait) suspends execution of the calling process until one of its children terminates.
The stat (man 2 stat) system call gets the status of a file. On success, zero is returned. On error, -1 is returned.
