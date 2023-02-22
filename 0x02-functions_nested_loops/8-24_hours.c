
0x02 Functions Nested loops
README.md



# Functions, nested loops

                


                

Project done during **Full Stack Software Engineering studies** at **ALX School**. It aims to learn about header files, functions, loops and nested loops in **C language**.

                


                

## Technologies

                

* C files are compiled using `gcc 4.8.4`

                

* C files are written according to the C90 standard

                

* Tested on Ubuntu 14.04 LTS

                


                

## Files

                

All of the following files are programs written in C:

                


                

| Filename | Description |

                

| -------- | ----------- |

                

| `0-Putchar.c` | Prints `Putchar` |

                

| `1-alphabet.c` | Prints the alphabet in lowercase |

                

| `2-print_alphabet_x10.c` | Prints 10 times the alphabet, in lowercase |

                

| `3-islower.c` | Checks for lowercase character |

                

| `4-isalpha.c` | Checks for alphabetic character |

                

| `5-sign.c` | Prints the sign of a number |

                

| `6-abs.c` | Computes the absolute value of an integer |

                

| `7-print_last_digit.c` | Prints the last digit of a number |

                

| `8-24_hours.c` | Prints every minute of the day |

                

| `9-times_table.c` | Prints the 9 times table, starting with 0 |

                

| `10-add.c` | Adds two integers and returns the result |

                

| `11-print_to_98.c` | Prints all natural numbers from `n` to `98` |

                

| `100-times_table.c` | Prints the `n` times table, starting with 0 |

                

| `101-natural.c` | Computes and prints the sum of all the multiplies of `3` or `5` below `1024` |

                

| `102-fibonacci.c` | Prints the first 50 Fibonacci numbers, starting with `1` and `2` |

                

| `103-fibonacci.c` | Finds and prints the sum of the even-valued terms |

                

| `104-fibonacci.c` | Finds and prints the first 98 Fibonacci numbers |





======================================


_putchar.c CODE



#include "main.h"

        #include <unistd.h>

        /**

         * _putchar - writes the character c to stdout

         * @c: The character to print

         *

         * Return: On success 1.

         * On error, -1 is returned, and errno is set appropriately.

         */

        int _putchar(char c)

        {

                return (write(1, &c, 1));

        }







=====================================



main.h CODE




#ifndef main_h

        #define main_h



        int _putchar(char);

        void print_alphabet(void);

        void print_alphabet_x10(void);

        int _islower(int c);

        int _isalpha(int c);

        int print_sign(int n);

        int _abs(int);

        int print_last_digit(int);

        void jack_bauer(void);

        void times_table(void);

        int add(int, int);

        void print_to_98(int n);

        void print_times_table(int n);



        #endif




=====================================


0-putchar.c CODE



#include "main.h"

        /**

         * main - print _putchar

         * is written by mbah

         * Return: 0

         */



        int main(void)

        {

        _putchar('_');

        _putchar('p');

        _putchar('u');

        _putchar('t');

        _putchar('c');

        _putchar('h');

        _putchar('a');

        _putchar('r');

        _putchar('\n');

        return (0);

        }





=====================================


1-alphabet.c CODE



#include "main.h"



        /**

         * print_alphabet - print all alphabet in lowercase

         */



        void print_alphabet(void)

        {

                char letter;



                for (letter = 'a'; letter <= 'z'; letter++)

                        _putchar(letter);



                _putchar('\n');

        }





=====================================


1-main.c CODE



#include "main.h"



        /**

         * main - check the code

         *

         * Return: Always 0.

         */

        int main(void)

        {

            print_alphabet();

            return (0);

        }




=====================================



2-print_alphabet_x10.c CODE




#include "main.h"



        /**

         * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,

         * followed by a new line

         */

        void print_alphabet_x10(void)

        {

                char ch;

                int i;



                i = 0;



                while (i < 10)

                {

                        ch = 'a';

                        while (ch <= 'z')

                        {

                                _putchar(ch);

                                ch++;

                        }

                        _putchar('\n');

                        i++;

                }

        }




=====================================



2-main.c CODE




#include "main.h"



        /**

         * main - check the code.

         *

         * Return: Always 0.

         */

        int main(void)

        {

            print_alphabet_x10();

            return (0);

        }




=====================================



3-islower.c CODE



#include "main.h"



        /**

         * _islower - check if char is lowercase

         * @c: is the char to be checked

         * Return: 1 if char is lowercase, otherwise 0.

         */



        int _islower(int c)

        {

                if (c >= 'a' && c <= 'z')

                        return (1);

                else

                        return (0);

        }




=====================================


3-main.c CODE




#include "main.h"

                


                

/**

                

 * main - check the code.

                

 *

                

 * Return: Always 0.

                

 */

                

int main(void)

                

{

                

    int r;

                


                

    r = _islower('H');

                

    _putchar(r + '0');

                

    r = _islower('o');

                

    _putchar(r + '0');

                

    r = _islower(108);

                

    _putchar(r + '0');

                

    _putchar('\n');

                

    return (0);

                

}




=====================================



4-isalpha CODE



#include "main.h"



        /**

         * _isalpha - checks for alphabetic character

         * @c: the character to be checked

         * Return: 1 if c is a letter, 0 otherwise

         */

        int _isalpha(int c)

        {

                return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

        }





=====================================


4-main.c CODE




#include "main.h"



        /**

         * main - check the code.

         *

         * Return: Always 0.

         */

        int main(void)

        {

            int r;



            r = _isalpha('H');

            _putchar(r + '0');

            r = _isalpha('o');

            _putchar(r + '0');

            r = _isalpha(108);

            _putchar(r + '0');

            r = _isalpha(';');

            _putchar(r + '0');

            _putchar('\n');

            return (0);

        }





=====================================



5-sign.c CODE



#include "main.h"



        /**

         * print_sign - prints the sign of a number

         * @n: the int to check

         * Return: 1 and prints + if n is greater than zero

         * 0 and prints 0 if n is zero

         * -1 and prints - if n is less than zero

         */

        int print_sign(int n)

        {

                if (n > 0)

                {

                        _putchar('+');

                        return (1);

                } else if (n == 0)

                {

                        _putchar(48);

                        return (0);

                } else if (n < 0)

                {

                        _putchar('-');

                }

                        return (-1);

        }




=====================================



5-main.c CODE



#include "main.h"



        /**

         * main - check the code.

         *

         * Return: Always 0.

         */

        int main(void)

        {

            int r;



            r = print_sign(98);

            _putchar(',');

            _putchar(' ');

            _putchar(r + '0');

            _putchar('\n');

            r = print_sign(0);

            _putchar(',');

            _putchar(' ');

            _putchar(r + '0');

            _putchar('\n');

            r = print_sign(0xff);

            _putchar(',');

            _putchar(' ');

            _putchar(r + '0');

            _putchar('\n');

            r = print_sign(-1);

            _putchar(',');

            _putchar(' ');

            _putchar(r + '0');

            _putchar('\n');

            return (0);

        }




=====================================


6-abs.c CODE



#include "main.h"



        /**

         * _abs - computes the absolute value of an integer

         * @n: the int to check

         * Return: the absolute value of int

         */

        int _abs(int n)

        {

                if (n >= 0)

                {

                        return (n);

                }

                return (-n);

        }




======================================



6-main.c CODE



#include "main.h"

        #include <stdio.h>



        /**

         * main - check the code

         *

         * Return: Always 0.

         */

        int main(void)

        {

            int r;



            r = _abs(-1);

            printf("%d\n", r);

            r = _abs(0);

            printf("%d\n", r);

            r = _abs(1);

            printf("%d\n", r);

            r = _abs(-98);

            printf("%d\n", r);

            return (0);

        }





====================================



7-print_last_digit.c CODE


#include "main.h"

/**

 * print_last_digit - prints the last digit of a number

 * @n: the int to extract the last digit from

 * Return: value of the last digit

 */

int print_last_digit(int n)

{

        int a;        


        if (n < 0)

                n = -n;


        a = n % 10;

                

        if (a < 0)

                a = -a;

        

        _putchar(a + '0');

        

        return (a);

                

}



=====================================


7-main.c CODE



#include "main.h"

        

/**

 * main - check the code

 *

 * Return: Always 0.

 */

int main(void)                

{        

    int r;


    print_last_digit(98);

    print_last_digit(0);

    r = print_last_digit(-1024);

    _putchar('0' + r);

    _putchar('\n');

    return (0);

}



=====================================



8-24_hours.c CODE



#include "main.h"



        /**

         * jack_bauer - prints every minute of the day of Jack Bauer

         * starting from 00:00 to 23:59

         */

        void jack_bauer(void)

        {

                int i, j;



                i = 0;



                while (i < 24)

                {

                        j = 0;

                        while (j < 60)

                        {

                                _putchar((i / 10) + '0');

                                _putchar((i % 10) + '0');

                                _putchar(':');

                                _putchar((j / 10) + '0');

                                _putchar((j % 10) + '0');

                                _putchar('\n');

                                j++;

                        }

                        i++;

                }

        }
