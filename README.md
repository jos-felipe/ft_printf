# printf
Write a library that contains ft_printf, a function
that will mimic the real printf

## Summary 

This project is pretty straight forward. You will recode printf. Hopefully you
will be able to reuse it in future projects without the fear of being flagged as a cheater.
You will mainly learn how to use variadic arguments.

### Requirements

> 1. The prototype of ft_printf should be int ft_printf(const char *, ...);
> 2. You have to recode the libc’s printf function;
> 3. It must not do the buffer management like the real printf;
> 4. It will manage the following conversions: cspdiuxX%;
> 5. It will be compared with the real printf
> 6. You must use the command ar to create your librairy, using the command libtool is forbidden.

### Mandatory part

> <i>A small description of the required conversion:
>
> - `%c` print a single character.
> - `%s` print a string of characters.
> - `%p` The void * pointer argument is printed in hexadecimal.
> - `%d` print a decimal (base 10) number.
> - `%i` print an integer in base 10.
> - `%u` print an unsigned decimal (base 10) number.
> - `%x` print a number in hexadecimal (base 16).
> - `%X` print a number in upper case hexadecimal (base 16).
> - `%%` print a percent sign.</i>

### How to test

```shell
gcc -Wall -Werror -Wextra ft_printf_bonus.c ft_printf_utils_bonus.c main.c && ./a.out
```

### Bonus part

Manage all the following flags:


| Flag  | Description 															 			|
|-------|-----------------------------------------------------------------------------------|
| **#** | Prefix the string "0x" or "0X" for x and X conversions.							|
|**' '**| (a space) A blank should be left before a positive number (or empty string) produced by a signed conversion.																					|
| **+** | A sign (+ or -) should always be placed before a number produced by a signed conversion. By default, a sign is used only for negative numbers. A + overrides a space if both are used.																						|
