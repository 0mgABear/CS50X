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
    - %% : use 2 if you want to use % for whatever reason. Treated specially inside C.
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

- Linux: known for CLI env.
