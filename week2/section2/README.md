## Week 2 Section

Questions:
What are the steps involved in compilation?

- source code -> assembly code -> binary
- usage of clang (c lang compiler)
  - would need the usage of command-line arguments to modify name of output file

What are arrays?

- long line of individual pieces of data
- three things to take care of:
  - name
  - size
  - type -> how much space to allocate to the array

What are strings?

- string of characters
- but just one big array
- with a special \0 (NUL) at the end.
- can circle(loop) through strings , since they are arrays also (in C).
- ASCI defines relationship between numbers and characters.

- can also treat characters as numbers.

What's the point of command-line arguments?

- modify program behaviour
- refresher: int main(int argc, string argv[]);
  - how many arguments are given : argc for argument count
  - array of the arguments -> argv: argument vector

What makes for good design?
