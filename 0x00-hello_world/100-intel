#!/bin/bash

# Get the C file name from the environment variable
CFILE=$CFILE

# Extract the file name without extension
FILENAME=$(basename "$CFILE" .c)

# Generate the assembly code using GCC and save it in a file
gcc -S -masm=intel "$CFILE" -o "$FILENAME.s"
