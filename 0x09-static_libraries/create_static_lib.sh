#!bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc libali.a *.c
ranlib libali.a
