# EPITECH C TEMPLATE

## Getting started:
- To get started, replace the `<bin_name>` placeholder by the name of your program into the `Makefile` & the `.gitignore` file.

## Building with make:
The given Makefile provide multiple rules :
- `all`: Calls `$(NAME)` rule
- `$(NAME)`: Builds the lib & our program
- `debug`: Calls `fclean` & builds our program with the gcc `-Wall -Wextra` flags & the `-g3` valgrind flag
- `clean`: Removes all object files
- `fclean`: Calls `clean` rule & removes the binary
- `re`: Calls `fclean` rule & calls the `all` rule

<br>

> Simply call a rule by executing `make <rule>` into the console <br>
> For example: `make fclean`

> ⚠️ Executing `make` without a rule will execute by default the `all` rule.

