//------------------------------------------------------------------------------
// Write Hello World without using  printf
// Philip R Brenan at appaapps dot com, Appa Apps Ltd. Inc. 2024
//------------------------------------------------------------------------------
#include <stdio.h>

int main()
 {char *m = "Hello World\n";                                                    // The message
  for(char *c = m; *c; ++c) putchar(*c);                                        // Scan string printing each characxter
 }
