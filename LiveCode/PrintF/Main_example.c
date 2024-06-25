#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main(const char *format, ...)
{
    // Setting up some variables
        // func_error_check will make sure our function is returned without error
        // format_print holds the function we'll use later
        // va_list will hold our arguments
    int func_error_check = 0;
    void (*func_print)(va_list);
    va_list args;

    // Start iteration through the arguments
    va_start(args, format);

    // Check to make sure we have input
    if (!format)
    {
        printf("I need an argument!");
        return 0;
    }

    // While we have characters, we'll move forward.
    while (*format != '\0')
    {
        // check for the format identifier
        if (*format == '%')
        {
            // grab the next character, as it's the specifier
            format++;
            if (!format)
            {
                printf("\nbro what do you even want? I can't do anything with this.");
            }

            // Call to find the proper printer function
            func_print = get_func(*format);

            // if we get the print function, we'll use it
            if (func_print != NULL)
            {
                // using our va_list will pull from the next argument in the list
                // there is no way to go backwards in this usage of va_list.
                func_print(args);
            }
        }
        // print the character as is
        else
        {
            printf("%c", *format);
        }
        // ITERATE! While loops do not auto iterate.
        format++;
    }

    // finish up using the args and return the end of the program
    va_end(args);
    return 0;
}