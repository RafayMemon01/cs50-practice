// make is a build tool that automates compilation
// but it needs a C compiler to do the actual work
// gcc (GNU C Compiler) is that compiler
// it translates human-readable .c code into machine code

// the chain is:
// hello.c (your code) -> gcc (translator) -> hello (executable)

// on CS50's platform gcc is pre-installed
// on local machines like Fedora you install it manually
// command: sudo dnf install gcc

// make calls gcc behind the scenes
// that is why without gcc, make throws: cc: No such file or directory

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string answer = get_string("What is your ? ");
    printf("Hello, %s\n", answer);
}