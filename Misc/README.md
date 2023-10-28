# Shorts

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

Provided Data Types in <cs50.h>:

- bool

  - boolean value : true / false

- string
  - to storea series of characters

Type

- void:
  - not a data type.
  - void return type : no return value.
  - void parameters : takes no parameters.
