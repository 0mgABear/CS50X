# Week 1 Shorts

## Data Types

- In C (older programming language), need to specify the type of variable the first time you declare it.

Built In Data Types:

- int : integers.
  - always 4 bytes (32 bits) of memory. (8 bits in a byte)
  - 32 bits is split into negative and positive integers (each taking half of the spectrum).
  - Range: -2^31 to 2^31 - 1
- unsigned : qualifier that can be applied to certain types (including int).
  - doubles positive range of variables, disabling negative values. --> 2^32 - 1
  - can use on other data types, not only integer.
  - other qualifiers: short, long, const.
- char : characters
  - char used for variables that will store _single_ characters.
  - always 1 byte (8 bits) of memory.
  - ASCII: mapping of characters to numercis values in the positive side of the range : -128(-2^7) to 127(2^7 - 1).
    - e.g. A (65), a (97)
- float: floating point numbers
  - used for variables that will store floating-point values, also known as real numbers.
  - always take up 4 bytes (32 bits) of memory.
- double:

  - same as float, but with _double precision_.
  - 8 bytes (64 bits) of memory.
  - allow for specification of more precise real numbers.

- only need to declare the data type on the first instance of initialisation. Not necessary for subsequent for subsequent manipulation.

Provided Data Types in <cs50.h>:

- bool

  - boolean value : true / false
  - in C: every nonzero vablue = true.
  - zero = false

- string
  - to storea series of characters

Type

- void:
  - not a data type.
  - void return type : no return value.
  - void parameters : takes no parameters.

## Operators

- = : assignment operator
  - put a value into a variable
- Arithmetic Operators
  - -, +, \*, /, % (modulus operator)
- Logical operators:
  - && (AND)
  - || (OR)
  - ! (NOT) : a.k.a bang
- Relational Operators:
  - > , <, >=, <=
  - == and !=

## Conditional Statements

- standard if...else statements.
- switch...case statements
  - specify different cases.
  - permits enuemration of discrete cases, instead of relying purely on Boolean expressions.
  - important to break between each case (unless intended)
- ternary operator!
  - ? :
  - My favourite operator!

## Loops

- infinite loop
  - while(true), runs forever
- while(condition) loops
- do...while(condition) loop
  - unknown number of times, but at least once
- for(condition){...logic} loop
  - repeat a discrete number of times
  - number may not be known on compilation

## Command Line

- ls
- cd
  - current directory : .
  - parent directory: ..
- pwd
- mkdir
- touch
- cp <source> <destination>
  -r to copy directories/files
- rm
  -r to remove directories
  -f for files
  -rf
- mv <source> <destination>
- chmod
  - change file permissions
- rmdir
- sudo
  - originally superuser do
  - now substitute user do?
- clean
- ln
- man
  - display user manual of any command that can be run on the terminal
- diff
  - difference : compare two files,
- telnet

# Week 2 Shorts

## Functions

## Variables and Scope'

## Debugging ("Step Through")

## Debugging ("Step Into")

## Arrays

## Command Line Arugments
