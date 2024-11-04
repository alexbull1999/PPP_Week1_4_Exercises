/* This header file declares functions that:
 * allow the user to input strings into two character arrays
 * and then compares the alphabetic value of the first string with that of the second string */

/* It assumes You may assume that the two strings contain only lower case letters,
 * and no blanks or other non-alphabetic characters. */

const int MAXLENGTH = 81; /*Fix max array length */

/* If deleting max array lenght doesn't work can use it as parameter for
 * new call to pointer in creating */

typedef char *CharPtrType;

void input_array1(char* string1_ptr);

void input_array2(char* string2_ptr);

void output_array1(char* string1_ptr);

void output_array2(char* string2_ptr);

bool alpha_compare(char* string1_ptr, char* string2_ptr);


