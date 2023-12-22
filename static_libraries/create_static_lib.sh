#!/bin/bash
gcc -wall -Wextra -Werror -pendantic -c *.c
ar rc liball.a *.o
