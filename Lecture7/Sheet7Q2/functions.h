/* This header file declares functions that:
 * allow the user to input strings into two character arrays
 * and then compares the alphabetic value of the first string with that of the second string */

/* It assumes You may assume that the two strings contain only lower case letters,
 * and no blanks or other non-alphabetic characters. */

const int MAXLENGTH = 81; /*Fix max array length */

void input_array1(char string1[MAXLENGTH]);

void input_array2(char string2[MAXLENGTH]);

void output_array1(char string1[MAXLENGTH]);

void output_array2(char string2[MAXLENGTH]);

bool alpha_compare(char string1[MAXLENGTH], char string2[MAXLENGTH]);


