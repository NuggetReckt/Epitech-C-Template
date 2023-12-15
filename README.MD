# EPITECH C TEMPLATE

## Getting started:
- To get started, replace the `<bin_name>` placeholders by the name of your program into the `Makefile` & `.gitignore` files.

## Building with make:
The given Makefile provides multiple rules :
- `all`: Calls `$(NAME)` rule
- `$(NAME)`: Builds the lib & our program
- `debug`: Calls `fclean` & builds our program with the gcc `-Wall -Wextra` flags & the `-g3` valgrind flag
- `clean`: Removes all object files
- `fclean`: Calls `clean` rule & removes the generated binary
- `re`: Calls `fclean` rule & calls the `all` rule

<br>

> Simply call a rule by executing `make <rule>` into the console <br>
> For example: `make fclean`

> ⚠️ Executing `make` without a rule will execute by default the `all` rule.

