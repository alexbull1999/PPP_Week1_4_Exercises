/*These functions are used for a program that converts Fahrenheit temperatures into Celsius and Kelvin temperatures.
 * Each function is defined individually. */

#ifndef CONVERSIONS_H
#define CONVERSIONS_H

/* FUNCTION TO CONVERT FAHRENHEIT TO CELSIUS */
double celsius_of(int fahr);

/* FUNCTION TO CONVERT FAHRENHEIT TO ABSOLUTE VALUE */
double absolute_value_of(int fahr);

/* Prints a message explaining what the program does: */
void print_preliminary_message();

/* prompt the user for table specifications in Fahrenheit: */
void input_table_specifications(int& lower, int& upper, int& step);

/* Print the table (including the column headings): */
void print_table(int& lower, int& upper, int& step);

/* print appropriate message including an echo of the input: */
void print_message_echoing_input(const int& lower, const int& upper, const int& step);

#endif

