#include <stdio.h>  // include library <stdio.h>

/*
 * #include <xxx.h> <> -> standard libraries/external libraries
 * #include "xxx.h" "" -> custom libraries
 */

/*
 *  std -> standard
 *  io -> input/output
 */

/*
int -> return type
main -> name
(int argc, char** argv) -> convention
    argc -> argument count
    argv -> argument values
 */
int main(int argc, char** argv)
{
    printf("Hello World!\n");  // function call to printf; \n -> new line
    return 0;                  // convention : return 0 to show that the function returned correctly
}
