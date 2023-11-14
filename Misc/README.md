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

- not a good idea to keep everything inside main
- a.k.a procedures, methods (in OOP), subroutines
- 0+ input and 1 output
- typically obvious name(s) and well documented
- break up complicated problem into manageable subparts
- easier to debug smaller pieces
- reusable

In C:

- declare at the top before main()
- declaration:
  - return-type name(argument-list);
    - return-type: type of variable the function will output
      - no output : void return type
    - name: name of fxn
    - argument-list : comma-separated, inputs to function, each has a type and name.
      - no inputs : void argument list

## Variables and Scope

Scope:

- characteristic of a variable that defines from which fxns that variable may be accessed
  - local variables can only be accessed within the fxns that they are created
    - pass by value (when we make the function call)
    - callee receives a copy of the variable, not the variable itself
  - global variables : can be used by any fxn

## Debugging ("Step Through")

- debug50 (filename)

## Debugging ("Step Into")

- using the step into option to go through line by line of code
- use strcmp for string comparison, not ==

## Arrays

- hold value of same data type at contiguous memory locations
- block of contiguous space in memory
  - partitioned into elements
  - can store a certain amount (and type) of data
  - all must be same data type
  - each element accessed by index
    - trying to access data outside of the array (e.g. non-existent indexes) might lead to segmentation fault
- declaration:
  - type name[size];
  - use curly braces to instantiate an array in C
- cannot treat entire ararys themselves as variables

  - cannot assign one array to another using assignment operator
  - possible in other languages, but not in C

- most variables in C are passed by value (passing a copy)
- array does NOT follow this rule
  - they are passed by reference
  - callee (function that is receiving the array) receives the actual array, not just a copy

## Command Line Arugments

- to collect command-line arguments from the user, declare main as:
  - int main (int argc, string argv[])
  - passing in two parameters into main
    - integer argc
      - argument count
      - store the numbe of command line arguments the user typed when program was executed
      - program name itself counts as a command-line argument, so minimum argc is 1.
    - array of strings argv
      - argument vector
      - vector is just another word for array
      - stores strings, one string per element : the strings that the user actually typed at the command-line when program was executed
      - (IMPORTANT) even if you type in a number in the command line, argv stores it as a string, not as an integer!
    - these 2 arguments enable us to know what data user provided at command-line and how many things was provided
    - can call them whatever, just called argc and argv based on convention
