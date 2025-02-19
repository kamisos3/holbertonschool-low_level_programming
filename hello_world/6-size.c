#include<limits.h>
#include<stdio.h>
/**
* main-Priting various size types
*
* Return:
* Always 0
*/
int main(void)
{
printf("size of char =  % d\n", sizeof(char));
printf("size of int =  % d\n", sizeof(int));
printf("size of long int =  % d\n", sizeof(long int));
printf("long_max=%ld\nulong_max=%lu\n", LONG_MAX, ULONG_MAX);
printf("size of float =  % d\n", sizeof(float));
return (0);
}
