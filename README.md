# Harvard's CS50X

### Notes By: 0mgABear (YY)

### October 2023

Online version of CS50 : Introduction to Computer Science

## Week 0: Scratch , Computational Thinking

- solving problems more methodically and translating into code.
- Scratch from MIT.
- week 1: on C. Lower level language.
- Take a look at memory and bugs in future lessons.
- Transition into algorithms : step by step instruction to solve some problems.
- Introduces to C first then to Python (higher-level language).

### Computer Science

- programming is a big part
- unary : fancy way of saying digits / numbers
  - base-1
- computers are binary (implying 2).
- binary digit is the origin of the word bit. Bit is just 0 and 1.
  - How do they speak or solve problems in binary?
  - Need to do so physically somehow.
  - Think lightbulb: If you want to represent a 0, you just keep that switch off. On the contary, 1 is just turning the lightbulb on.
  - Million to billions of switches : transistors. Electricity is there, or it's not.
- base-2 (a.k.a binary), comes with certain rules.
- byte : 8 bits. Octet equivablent.
- A usually represented by the number 65. ASCII.
  - mapping between numbers and letters.
  - Unicode. (includes other languages)
  - 32 bits : 4B permutations, more than we ever need!
  - Even emojis are just unicode.
- Abstraction : simplification of something. Focus on the high level goals, and not so much the low level stuff.
- Verbs --> functions.

## Week 1 : C

- source code : human written code
- machine code : what computers understand and execute.
- compiler: convert source to machine code.
  - make (C) : it's essentially the compiler.
  - \n : escape sequence, move the cursor to the next line.
  - ? #include <stdio.h> : needed, but why?
    - you don't get printf automatically in c
    - header file to declare that the function exists.
    - only include the functions you care about.
    - stands for: standard input/output.
  - %s : placeholder, format code. Placeholder for a string.
  - %i : Placeholder for integer.
  - %li : Placeholder for long integer.
  - %f : Placeholder for floating point value.
    - %% : use 2 if you want to use % for whatever reason. Treated specially inside C.
    - %.20f : 20 decimal places.
- Training library: cs50.h
- If you want to get back a return vale, need to declare a variable.
  - = : assignment, not equality.
  - == : comparison
  - free choice of variable name.
  - C is more pedantic , need to tell C the TYPE of value.
    - Statically typed language!
- make (filename), followed by ./ to execute the file.
- Best practice: opening curly brace keep it on a separate line, don't follow Javascript syntax.
  - use " " (double quotes) for any string > 1 character.
  - use ' ' (single quotes) for deliberately single characters (chars)
  - || (2 vertical bars) for OR operator.
- Count from 0, count up.
- While loops and for(int) loops as well.
- Const : immutable.
- Do while loop!

  - Also exists in [Javascript] (https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Statements/do...while)

- Linux: known for CLI env.

- Void within function : does not take any arguments.
- Declare what type of output at the very front. (int/bool/e.t.c.)

- 32bit: max number ~ 4B.
  - but highest it can count is ~2B (allocate half to negative numbers).
  - integer overflow : run out of bits.
- long : long integers.
- truncation could be a problem --> type casting.
- floating-point imprecision : limit on how precise numbers can be.
- double : uses twice the number of bits. (64)

## Week 2 : Arrays

- ciphertext
  - result of encrypting some piece of information
- encryption / art of cryptogaphy

Some recap:

- compile : source -> machine code
- clang compiler, underneath the hood
  - easier to use "make"
  - tedious to use : clang -o hello hello.c -lcs50
  - no real benefit of using clang manually
- another: gcc
- command line arguments:
  - (word/phrase) keywords that modify the behaviour of that command
  - a.out : assembler output (default when compiling with clang)
- whole process: preprocessing -> compiling -> assembling -> linking
  - preprocessing: # (preprocessor directive), special symbol in C.
    - function declarations in another file / library
    - copy and paste from other libraries so that your code knows about all these other functions that you are using / importing.
  - compiling : change to assembly code --> closer to what computers themselves undertand
  - assembling : converts to actual machine code
  - linking : link your code with preprocessed code (link all the 1s and 0s together).
- decompiling is not so easy, basically revese engineering the 1s and 0s to source code.
  - many cons : stealing of intellectual property
  - easier to find bugs etc.
- can use printf() as a form of debugging.
- there is a built in debugger in visual studio code.

  - to the left of the editor, the "gutter", there is a red dot : a breakpoint.
  - a stop sign equivalent, telling the editor to stop running the code there.
  - step through code line by line.
  - debug50 (for the purposes of this course)
  - some "play back" functions at the top of vscode.

- rubber duck debugging:

  - express yourself verbally , sounding things out.
  - talking to someone!
  - don't stare at your screen endlessly, take a break.

- in C, no libary to determine the length of an array
  - must remember the length of the array yourself.
- arrays can be used to store multiple values, can also be passed arounda as arguments.

- string : variable length

  - just an array of characters. (in C)
  - can treat string as an array and then access each of the individual letters by their index.
  - when you store string in memory, it uses a +1 byte in total, adds a special \0.
  - \0 : NUL. The string ends here.
  - NUL only exists in string, not arrays.
  - strlen exists in <string.h>

- <c.type.h> : another helpful library

### Command Line Arguments:

- cowsay
  - takes at least 1 argument
  - output something with a cow saying it.
  - -f : change appearance of cowsay
    - duck, dragon

### Exit Status:

- returns a secret integer when your main function exits
- usually used to indicate errors
  - error codes usually correspond to something somewhere that a human knows what the error is.
- echo $?
- can always check in code

int is always there for main, and it indicates main will ALWAYS return an integer.

- even if we don't declare it explicitly
- usually returns 0 by default. (hidden)

### Cryotography:

- scrambling information
- encryption
- only people who know what algorithm you used + the input can decrpt
- plaintext --> ciperhtext
- algorithm : cipher (in cryptography)
  - need an input
