
![](https://cdn.hashnode.com/res/hashnode/image/upload/v1669568174223/gJoaXPx9k.jpg?w=1600&h=840&fit=crop&crop=entropy&auto=compress,format&format=webp)  
## _printf()
> In this project, we recreated a mini-verison of the ```printf``` function found in
> the ```stdio.h``` library in the C programming language. This function allows
> us to print any argument given to the standard output or terminal and similar
> printing functions can be found in any programming language. This means we can
> print any combinations of strings, intergers, and other different data types.

### Synopsis
> This repository holds all the code necessary for our custom ```_printf```
> function to run. Our mini-version currently handles conversion specifiers:
> ```c```, ```s```, ```%```, ```d```, ```i```,  and does not yet
> support field width, precision, flag characters, or length modifiers.
> Our pritnf function prints any character, string, and  integer.  


### Description of what each file shows:
```
man_3_printf ----------------------- custom manpage for custom _printf function
_printf.c ---------------------------- holds custom _printf function
main.h ------------------------ holds prototypes of functions spread across all files
putchar.c ----- holds function to print single character
print_str.c --------------------------- handles %s to print a string of characters
print_char.c ----------------------------- handles %c to print a single character
print_d.c ----------------------------- handles %d to print a number
```
### Environment
* Language: C
* OS: Ubuntu 20.04 LTS
* Compiler: gcc 11.4.0
* Style guidelines: [Betty style](https://github.com/holbertonschool/Betty/wiki)

### How To Install & Compile
```
(terminal)$ https://github.com/Akuro1411/holbertonschool-printf.git
(terminal)$ cd holbertonschool-printf
```
Sample main program inside print.c:
```
int main(void)
{
	_printf("%s %c %d", "Hello K_N!", "H", 100);
	return (0);
}
====================================
(terminal)$ gcc -Wall -Werror -Wextra -pedantic -Wno-format *.c -o print
(terminal)$ ./print
Hello K_N! H 100
(terminal)$
```

### To Do
* The main _printf function can be separated into more modular shorter functions
* More functionality can still be added (e.g. support field width specifiers, etc)

---
### Authors
Nahid Isayev
Kamran Qureyshi