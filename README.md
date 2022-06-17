# BrainFuck

## Project
A simple BrainFuck interpreter

## About BrainFuck language
Brainfuck is one of the most famous esoteric programming languages, and has inspired the creation of a host of other languages

## Insctructions
Brainfuck has the following commands:
| Command  | Description  |
|---|---|
| >  | Move the pointer to the right  |
| <  | Move the pointer to the left  |
| +  | Increment the memory cell at the pointer  |
| -  | Decrement the memory cell at the pointer  |
| .  | Output the character signified by the cell at the pointer  |
| ,  | Input a character and store it in the cell at the pointer  |
| [  | Jump past the matching ] if the cell at the pointer is 0  |
| ]  | Jump back to the matching [ if the cell at the pointer is nonzero  |

## Example

Hello World!
```shell
++++++++[>++++[>++>+++>+++>+<<<<-]>+>+>->>+[<]<-]>>.>---.+++++++..+++.>>.<-.<.+++.------.--------.>>+.>++.
```
