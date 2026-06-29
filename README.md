<h1>Simple C CLI Bot</h1>


This is a small command line bot I made while learning C. I wanted to make something that takes commands from the user instead of just printing text on the screen. It isn't a real Slack bot yet, but it's a good starting point for learning how command-based programs work.

What it can do

- "!hello" - prints a greeting.
- "!calc" - does basic math (+, -, *, /).
- "!exit" - closes the program.
- Every command you type is saved in "log.txt".

Why I made this

I made this project to practice C in a fun way instead of only solving small exercises. While making it I learned how to read user input, compare strings, use functions, and write to files.

How I built it

I wrote everything in C and compiled it using GCC. The program keeps asking for commands in a loop, checks which command was entered, performs the action, and then writes the command to a log file before waiting for the next one.

Example

> !hello
Hello!

> !calc 8 * 7
56

> !exit
Goodbye!

Project files

main.c
README.md
log.txt
LICENSE

What I learned

- Reading input from the terminal
- Using if statements and functions
- String comparison
- Basic file handling
- Building a simple command-based program

Things I want to add later

- More commands
- Better error messages
- Command history
- Support for decimal numbers

License

This project is licensed under the GPL-3.0 License.
