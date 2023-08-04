#!/bin/bash

# Compile all .c files into .o files
gcc -c *.c -I.

# Create the static library liball.a from all .o files
ar rcs liball.a *.o

# Clean up by removing the .o files
rm *.o
