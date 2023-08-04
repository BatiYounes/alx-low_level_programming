#!/bin/bash

# Create a temporary directory to store object files
mkdir tmp_objects

# Compile all .c files into .o files and store them in the temporary directory
for file in *.c
do
  gcc -Wall -pedantic -Werror -Wextra -c "$file" -o "tmp_objects/${file%.c}.o"
done

# Create the static library liball.a from all .o files in the temporary directory
ar rcs liball.a tmp_objects/*.o

# Clean up by removing the temporary directory
rm -rf tmp_objects
