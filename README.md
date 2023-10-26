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
