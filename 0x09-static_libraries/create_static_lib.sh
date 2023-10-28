#!/bin/bash

# Find all .c files in the current directory
c_files=$(find . -maxdepth 1 -type f -name "*.c")

# Create a temporary directory to store object files
tmp_dir=$(mktemp -d)

# Compile each .c file into an object file in the temporary directory
for file in $c_files; do
    object_file="$tmp_dir/$(basename $file .c).o"
    gcc -c "$file" -o "$object_file"
done

# Create the static library liball.a from the object files
ar rcs liball.a $tmp_dir/*.o

# Clean up the temporary directory
rm -r "$tmp_dir"

echo "Static library liball.a has been created from all .c files in the current directory."

