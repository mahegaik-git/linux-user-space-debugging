export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:/home/mahesh/learnings/forgit/linux-user-space-debugging/ltrace/lib
gcc -Wall -fPIC main.c -L/home/mahesh/learnings/forgit/linux-user-space-debugging/ltrace/lib -lmath


FROM
Assume your C code is foo.c, the library is libfoobar.so, and both are in directory ${HOME}/homework.

First, tell the runtime system where to look for the library.
export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:${HOME}/homework

Then compile, being sure to tell the compiler where the library lives:
gcc -Wall foo.c -L${HOME}/homework -lfoobar


