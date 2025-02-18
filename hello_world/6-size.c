#include<stdio.h>
/**
* main-Priting various size types
*
* Return:
* Always 0
*/
int main(void)
{ 
printf("char: %zu bytes\n", sizeof(char));
printf("int: %zu bytes\n", sizeof(int));
printf("long int: %zu bytes\n", sizeof(long int));
printf("long long int: %zu bytes\n", sizeof(long long int));
printf("float: %zu bytes\n", sizeof(float));
return (0);
}
