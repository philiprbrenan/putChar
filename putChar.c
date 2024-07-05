//------------------------------------------------------------------------------
// Write "Hello World"  a without using printf
// Philip R Brenan at appaapps dot com, Appa Apps Ltd. Inc. 2024
//------------------------------------------------------------------------------
#include <stdio.h>

int main()
 {for(char *c = "Hello World\n"; *c; ++c) putchar(*c);                          // Scan string printing each character
 }
