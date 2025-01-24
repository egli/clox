alias lox := run

# Display all avaliable recipes
[private]
help:
    @just --list --unsorted

# Build the interpreter
build:
    cmake .
    make

# Run the interpreter
run:
    @./clox

# Clean up
clean:
    make clean
