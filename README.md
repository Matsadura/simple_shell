# Simple Shell

This project is a simple UNIX command line interpreter, or "Shell", written in C. The shell takes user commands and interprets them into instructions that the operating system can understand. This shell replicates some of the basic functionalities of a typical shell, including handling command lines with arguments, managing the PATH, implementing built-ins like "cd", "exit", and "env", and more.

## Features

* Displays a prompt and waits for the user to type a command, which always ends with a newline.
* The prompt is displayed again each time a command has been executed.
* Handles command lines with arguments, not just single-word commands.
* Manages the PATH, so you can call programs from anywhere without specifying the full path.
* Implements built-in commands: 'cd', 'exit', 'env', 'setenv', 'unsetenv'.
* Handles the "end of file" condition (Ctrl+D).
* Prints a custom error message when an executable cannot be found.
* If a command cannot be found, it will print an error message and display the prompt again.

## Compilation

The shell is compiled this way:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```

## Usage

The shell works in both interactive and non-interactive mode.

In interactive mode:

```bash
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```

In non-interactive mode:

```bash
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
```

## Built-in Commands

* `cd [DIRECTORY]`: Changes the current directory of the process. If no directory is given, the command is interpreted like `cd $HOME`.
* `exit [status]`: Exits the shell, where status is an integer used to exit the shell.
* `env`: Prints the current environment.
* `setenv`: Adds a new environmental variable.
* `unsetenv`: Deletes an environmental variable.

## Extras

This shell also handles command separators (like `;`), logical operators (like `&&` and `||`), variable replacement (`$?` and `$$`), comments (`#`), and more.

## Authors
This project is a collaboration between : 
Radouane ABOUNOUAS & Zidane ZAOUI

## More Projects
[Printf Implementation](https://github.com/Matsadura/printf)
[ALX Time Saver](https://github.com/Matsadura/ALX_Time_Saver)
