# printf
Write a library that contains ft_printf, a function
that will mimic the real printf

## Summary 

The printf() function produces output according to a format as described below.
It writes output to stdout - the standard output stream. The overall syntax of a conversion specification is:

           %[$][flags][width][.precision][length modifier]conversion


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

### Bonus part

Manage all the following flags:


| Flag  | Description 															 			|
|-------|-----------------------------------------------------------------------------------|
| **#** | Prefix the string "0x" or "0X" for x and X conversions.							|
|**' '**| Add a single space (' ') in the front of positive numeric conversions.																					|
| **+** | Add a plus sign ('+') in the front of positive numeric conversions

### How to test

```shell
make && cc -w -o tester tester.c -L./ -lftprintf && ./tester
```
