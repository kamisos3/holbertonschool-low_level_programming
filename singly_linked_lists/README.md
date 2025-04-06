Singly Lists

• Introduction •
    In this project we apply a new data structure to work with, singly lists. Before,
  we applied the data structure arrays, even though both are linear and forward 
  movement through the memory, singly arrays allows you to add more data elements which 
  makes space for flexibility since you can add elements without rearranging your code.


• Description •
  A linked list is a data structure that arranges data elements that worked linearly 
but aren't organized linearly. This type of data structure let's you add elements 
indefinitely. It uses nodes, that are a structure containing a pointer to the next 
node. To access the value of the next node by dereferencing with these characters
'->'.  


• Requisites •

* The codes must be checked with Betty style, betty-style.pl and 
* A _putchar file was made in order to print characters, but printf can be used in just some cases. 
* This was used to compile the program we use gcc -Wall -pedantic -Werror -Wextra -std=gnu89 with the main.c and file name added.
* 

• Protoypes and Functions •

*
*
*
*
*


• Usage Example •

#include <stdio.h>
#include <stdlib.h>

struct singly_list {
  int data;
  struct singly_list *next;
};


• Branches •
* main


• Author •
Kamila Sostre
