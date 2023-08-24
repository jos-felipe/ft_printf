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

### Mandatory

> <i>A small description of the required conversion:
>
> - `%c` print a single character.
> - `%s` print a string of characters.
> - `%p` The void * pointer argument is printed in hexadecimal.
> - `%d` print a decimal (base 10) number.
> - `%i` print an integer in base 10.
> - `%u` print an unsigned decimal (base 10) number.
> - `%x` print a number in hexadecimal (base 16).
> - `%%` print a percent sign.</i>